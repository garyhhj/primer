#include <iostream>
#include <list>
#include <string>


int main() {
	std::string s;
	std::list<std::string> ls; 
	while (std::cin >> s) {
		ls.push_back(s); 
	}

	int freq = std::count(ls.cbegin(), ls.cend(), "hello"); 
	std::cout << freq << std::endl; 
}