#include <iostream>
#include <fstream>
#include <vector>
#include <string>

std::vector<std::string> read(const std::string& fname) {
	std::ifstream ifstrm; 
	ifstrm.open(fname); 

	if (!ifstrm) {
		std::cerr << fname << " cannot be opened" << std::endl; 
		return {}; 
	}

	std::vector<std::string> vs; 
	std::string s; 
	while (std::getline(ifstrm, s)) {
		vs.push_back(s); 
	}
	return vs; 
}

int main() {
	std::string fname; 
	std::cin >> fname; 
	std::vector<std::string> vs = read(fname); 

	for (const auto& i : vs) {
		std::cout << i << '\n';
	}

	return 0; 
}