#include <map>
#include <set>
#include <iostream>
#include <string>

int main() {

	std::set<std::string> exclude = { "woof" }; 
	std::map<std::string, int> word_count; 
	
	std::string word;
	while (std::cin >> word) {
		if (exclude.find(word) == exclude.end()) {
			++word_count[word]; 
		}
	}

	for (auto& w : word_count) {
		std::cout << w.first << " : " << w.second << "\n";
	}
}