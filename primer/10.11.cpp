#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

/*
void elimDups(std::vector<std::string>& words) {
	std::sort(words.begin(), words.end());
	std::vector<std::string>::iterator it = std::unique(words.begin(), words.end()); 
	words.erase(it, words.end()); 
}

bool isShorter(const std::string& s1, const std::string s2) {
	return s1.size() < s2.size(); 
}

int main() {
	std::vector<std::string> words; 
	std::string word; 

	while (std::cin >> word) {
		words.push_back(word); 
	}

	using namespace std; 
	cout << words.size() << endl; 

	std::stable_sort(words.begin(), words.end(), isShorter); 
	for (auto w : words) {
		std::cout << w << ' ';
	} std::cout << std::endl; 

	elimDups(words); 
	for (auto w : words) {
		std::cout << w << ' ';
	} std::cout << std::endl; 

}
*/