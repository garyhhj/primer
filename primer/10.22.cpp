#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

/*
void elimDup(std::vector<std::string>& words) {
	std::sort(words.begin(), words.end());
	auto it = std::unique(words.begin(), words.end());
	words.erase(it, words.end());
}

bool greaterThanSz6(std::string& word) {
	return word.size() > 6;
}

void biggies(std::vector<std::string>& words) {

	elimDup(words);

	auto it = std::stable_partition(words.begin(), words.end(),
		[](std::string& a) { return a.size() > 6; });

	int wordsGreater = std::count_if(words.begin(), words.end(),
		std::bind(greaterThanSz6, std::placeholders::_1));
	std::cout << "number of elements w/ sz greater than 6 : " << wordsGreater << "\n";

	for (auto word = words.begin(); word != it; ++word) {
		std::cout << *word << std::endl;
	}
}

int main() {
	using namespace std;

	std::vector<std::string> words;
	std::string word;
	while (std::cin >> word) {
		words.push_back(word);
	}

	biggies(words);

}
*/