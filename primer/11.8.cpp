//set cannot contain duplicates, vector can 

#include <iostream>
#include <vector>
#include <string>

int main() {
	std::vector<std::string> excluded = { "woof", "bark" }; 

	std::vector<std::string> res; 
	std::string word; 
	while (std::cin >> word) {
		auto it = std::find(excluded.begin(), excluded.end(), word); 
		
		//excluded word
		if (it != excluded.end()) {
			res.push_back(word); 
		}

		//accepted word 
		else {
			std::cout << word << "\n"; 
		}
	}

	std::cout << "excluded words: "; 
	for (const auto& w : res) {
		std::cout << w << " "; 
	}
	std::cout << "\n"; 
}