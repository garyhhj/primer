#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

void read() {
	std::string fname; 
	std::cin >> fname; 

	std::ifstream ifstrm(fname); 
	if (!ifstrm) {
		std::cerr << "cannot open " << fname << std::endl; 
		return; 
	}

	std::string s; 
	std::vector<std::string> content; 
	while (std::getline(ifstrm, s)) {
		content.push_back(s); 
	}

	std::string word; 
	for (const auto& line : content) {
		std::istringstream isstrm(line); 
		
		while (isstrm >> word) {
			std::cout << word << ' '; 
		}
		std::cout << '\n'; 
	}
}


int main() {
	read(); 
}