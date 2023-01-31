//subscript is more convenient 

#include <map>
#include <iostream>
#include <string>

/*
int main() {
	std::map<std::string, int> word_count; 

	std::string word; 
	while (std::cin >> word) {
		//word_count[word] += 1; 

		std::pair<std::map<std::string, int>::iterator, bool> ret =
			word_count.insert({ word, 1 }); 

		if (!ret.second) {
			ret.first->second += 1;
		}

	}

	std::cout << "printing word_count: \n";
	for (auto& it : word_count) {
		std::cout << it.first << " " << it.second << "\n"; 
	}


}
*/