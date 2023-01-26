#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


void elimDup(std::vector<std::string>& words) {
	std::sort(words.begin(), words.end());
	auto it = std::unique(words.begin(), words.end());
	words.erase(it, words.end());
}

void biggies(std::vector<std::string>& words, std::vector<std::string>::size_type sz) {

	elimDup(words);

	auto it = std::stable_partition(words.begin(), words.end(),
		[sz](std::string& a) { return a.size() >= sz; });

	std::cout << "number of elements w/ sz or greater: " << it - words.begin() << "\n";

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

	biggies(words, 4);

}
