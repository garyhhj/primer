#include <iostream>
#include <vector>
#include <sstream>
#include <string>

/*
struct PersonInfo {
	std::string name; 
	std::vector<std::string> phones; 
};


void read(std::vector<PersonInfo>& people) {
	std::string line, word; 

	std::istringstream record; 
	while (std::getline(std::cin, line)) {
		PersonInfo info; 
		record.clear(); //reset badbit and failbit 
		record.str(line); 

		record >> info.name; 


		while (record >> word)
			info.phones.push_back(word); 
		people.push_back(info); 
	}
	
}


int main() {
	std::vector<PersonInfo> people; 
	read(people); 

	for (const auto& info : people) {
		std::cout << info.name << " : "; 
		for (const auto& number : info.phones) {
			std::cout << number << ' '; 
		}
		std::cout << '\n'; 
	}
}
*/