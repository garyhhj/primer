#include <iostream>
#include <map>
#include <string>

int main() {
	std::map<std::string, std::size_t> mp; 

	//counts frequency of word 
	std::string word;
	while (std::cin >> word) {
		++mp.insert({ word, 0 }).first->second; 
	}

	std::cout << "printing map: \n";
	for (auto& i : mp) {
		std::cout << i.first << " " << i.second << "\n"; 
	}
}