#include <iostream>
#include <vector>
#include <string>
#include <functional>


bool check_size(std::string& word, int sz) {
	return word.size() < sz; 
}

std::vector<int>::iterator 
greaterThanStrSz(std::vector<int>& vi, std::string& word) {
	auto it = std::find_if(vi.begin(), vi.end(),
		std::bind(check_size, word, std::placeholders::_1));

	return it; 
	
}

int main() {
	std::string word = "meow";

	int i;
	std::vector<int> vi;
	while (std::cin >> i) {
		vi.push_back(i);
	}

	auto it = greaterThanStrSz(vi, word);

	if (it == vi.end()) {
		std::cout << "no element found\n";
	}
	else
	{
		std::cout << "element found has val of "; 
		std::cout << *it << "\n";
	}
}