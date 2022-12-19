#include <iostream>
#include <stack>
#include <string>

//can be done more efficiently by just copying only parenthesis to another stack to check to avoid constantly popping and pushing 
void processParenthesizedExpression(std::stack<char>& charStk, const std::string expression) {
	for (const char i : expression) {
		if (i == ')') {
			
			std::stack<char> temp; 
			while (!charStk.empty() && charStk.top() != '(') {
				temp.push(charStk.top()); 
				charStk.pop(); 
			}
			if (!charStk.empty() && charStk.top() == '(') {
				charStk.pop(); 
				while (!temp.empty()) {
					charStk.push(temp.top()); 
					temp.pop(); 
				}
			}
			else {
				std::cout << "invalid parenthesized expression: " << expression << std::endl; 
				return; 
			}
			continue; 
		}

		charStk.push(i); 
	}

	//case with more left paren than right paren
	std::stack<char> temp; 
	while (!charStk.empty()) {
		temp.push(charStk.top()); 
		if (charStk.top() == '(') {
			std::cout << "invalid parenthesized expression: " << expression << std::endl; 
			return; 
		}
		charStk.pop(); 
	}
	while (!temp.empty()) {
		charStk.push(temp.top()); 
		temp.pop(); 
	}

}

int main() {
	const std::string expression = "(`(123)"; 
	std::stack<char> charStk; 
	processParenthesizedExpression(charStk, expression); 

	//print stack in reverse order 
	while (!charStk.empty()) {
		std::cout << charStk.top() << ' '; 
		charStk.pop(); 
	}

}