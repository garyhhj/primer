#include <iostream>
#include <vector>
#include <string>

/*
//prints number of words of a given size or greater
//prints the words of that size or greaqter 
void biggies(std::vector<std::string>& words, std::vector<std::string>::size_type sz) {

	
	int count = 0; 
	for (auto& word : words) {
		auto greater = [word, sz]()->bool {return word.size() >= sz; };
		if (greater()) {
			std::cout << word << '\n';
			++count; 
		}
	}
	std::cout << "number of words: " << count << '\n'; 
}

int main() {
	std::vector<std::string> words; 
	std::string word; 
	while (std::cin >> word) {
		words.push_back(word); 
	}

	std::cin.clear(); 

	int sz; 
	std::cin >> sz; 

	biggies(words, sz); 
}
*/