#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>

struct PersonInfo {
	std::string name;
	std::vector<std::string> phones;
};


void read(std::vector<PersonInfo>& people) {
	std::string fname; 
	std::cin >> fname; 

	std::ifstream ifstrm(fname); 
	if (!ifstrm) {
		std::cerr << "cannot open file " << fname << std::endl; 
		return; 
	}

	std::string line, word;
	std::istringstream record;
	while (std::getline(ifstrm, line)) {
		PersonInfo info;
		record.clear(); //reset badbit and failbit 
		record.str(line);

		record >> info.name;


		while (record >> word)
			info.phones.push_back(word);
		people.push_back(info);
	}
}

bool valid(const std::string& nums) {
	for (const auto& digit : nums) {
		if (digit < '0' || digit > '9') {
			return false; 
		}
	}
	
	if (nums.size() != 10) {
		return false; 
	}

	return true; 
}

std::string format(const std::string& nums) {
	return nums.substr(0, 3) + " - " + nums.substr(3, 3) + " - " + nums.substr(6, 4); 
}

void print(std::vector<PersonInfo>& people) {
	std::ostringstream formatted, badNums; 
	for (const auto& i : people) {
		formatted.str(""); 
		badNums.str(""); 

		for (const auto& nums : i.phones) {
			if (!valid(nums)) {
				badNums << " " << nums; 
			}
			else {
				formatted << " " << format(nums); 
			}
		}

		if (badNums.str().empty()) {
			std::cout << i.name << " : "; 
			std::cout << formatted.str() << '\n';
		}
		else {
			std::cerr << "INVALID NUMBER FROM: " << i.name << " : ";
			std::cerr << badNums.str() << '\n'; 
		}
	}
}

int main() {
	std::vector<PersonInfo> people; 
	read(people);
	print(people); 
}