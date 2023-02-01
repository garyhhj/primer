#include <string>
#include <unordered_map>
#include <iostream>
#include <fstream>
#include <sstream>

/*
void buildMap(std::unordered_map<std::string, std::string>& trans_map) {
	std::fstream fstr("11.33rule.txt");

	std::string line;

	while (std::getline(fstr, line)) {
		std::string key;
		std::string val;
		std::string word;
		std::stringstream ss(line);

		ss >> key;

		while (ss >> word) {
			val += word;
			val += " ";
		}

		if(!val.empty())
			val.pop_back();

		trans_map[key] = val;
	}
}

void print(std::unordered_map<std::string, std::string>& mp) {
	for (auto& i : mp) {
		std::cout << i.first << " : " << i.second << "\n";
	}
}

void wordTransform(std::unordered_map<std::string, std::string>& trans_map) {
	std::fstream fstr("11.33text.txt");

	std::string line;
	std::string word;
	while (std::getline(fstr, line)) {
		std::stringstream ss(line);

		while (ss >> word) {

			//word exist
			if (trans_map.find(word) != trans_map.end()) std::cout << trans_map[word];

			//word doesnt exist
			else std::cout << word;

			//space
			std::cout << " ";
		}

		//new line
		std::cout << "\n";
	}
}

int main() {
	std::unordered_map<std::string, std::string> trans_map;
	buildMap(trans_map);
	print(trans_map);

	std::cout << "\n";
	wordTransform(trans_map);
}
*/