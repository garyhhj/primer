#include <map>
#include <set>
#include <iostream>
#include <string>



void ignore_case_punctuation(std::string& word) {
	std::string new_word = "";

	for (auto it = word.begin(); it != word.end();) {
		//lower case letter 
		if (*it > 'a' && *it < 'z') {
			++it; 
			continue;
		}

		//upper case letter
		if (*it > 'A' && *it < 'Z') {
			*it += 'a' - 'A';
			++it; 
		}
		//punctuation
		else {
			it = word.erase(it); 
		}
	}

}

int main() {

	std::set<std::string> exclude = { "woof" };
	std::map<std::string, int> word_count;

	std::string word;
	while (std::cin >> word) {
		ignore_case_punctuation(word); 

		if (exclude.find(word) == exclude.end()) {
			++word_count[word];
		}
	}

	for (auto& w : word_count) {
		std::cout << w.first << " : " << w.second << "\n";
	}
}
