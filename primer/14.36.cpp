#include <iostream>
#include <string>
#include <vector>

struct PrintString {

	std::string operator()() {
		std::string line;
		std::getline(std::cin, line);
		if (!std::cin) {
			line = "";
			return line;
		}
		return line;
	}
};

int main() {
	PrintString ps;
	std::vector<std::string> vs; 



	std::string line = ps(); 
	while (!line.empty()) {
		vs.push_back(line); 
		line = ps(); 
	}

	for (const auto& s : vs) {
		std::cout << s << "\n";
	}
}

