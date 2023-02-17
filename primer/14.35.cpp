#include <iostream>
#include <string>

struct PrintString {
	
	std::string operator()() {
		std::string line; 
		std::getline(std::cin, line); 
		if (!std::cin) {
			line = ""; 
			return line;
		}
		return line; 
	}
};

int main() {
	PrintString ps; 
	std::cout << ps(); 
}