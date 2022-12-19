#include <iostream>
#include <string>
#include <map>
#include <sstream>


class date {
	friend bool isLetter(char i); 
public: 
	date(); 
	date(const std::string& date);

	void printDate(); 

private: 
	unsigned int year;
	unsigned int month;
	unsigned int day;

	std::map<std::string, unsigned int> monthToInt = {
		{"Jan", 1}, {"Feb", 2},
		{"January", 1}, {"February", 2} 
	};
};

date::date() {}

bool isLetter(char i) {
	bool res = false; 
	if (i >= 'a' && i <= 'z') res = true; 
	if (i >= 'A' && i <= 'Z') res = true; 
	return res; 
}

date::date(const std::string& date) {

	bool containLetter = false; 
	for (auto i : date) {
		containLetter = isLetter(i); 
		if (containLetter) break; 
	}

	if (containLetter) {
		// January 1, 1900
		// Jan 1, 1900
		std::stringstream ss(date); 

		//month
		std::string s; 
		ss >> s; 
		month = monthToInt[s]; 

		//date 
		ss >> s; 
		s = s.substr(0, s.size() - 1); 
		day = std::stoul(s); 

		//year 
		unsigned int yearCpy; 
		ss >> yearCpy; 
		year = yearCpy; 
	}
	else {
		// 1/1/1900

		int prev = 0; 
		for (int i = 0; i < date.size(); ++i) {
			if (date[i] == '/') {
				std::string s = date.substr(prev, i - prev); 
				if (prev == 0) {
					month = std::stoul(s); 
				}
				else {
					day = std::stoul(s);
				}
				prev = i + 1; 
			}
		}

		std::string s = date.substr(prev, date.size() - prev); 
		year = std::stoul(s); 
	}
}

void date::printDate() {
	std::cout << "year month day: " << year << ' ' << month << ' ' << day << std::endl; 
}

int main() {
	//date a("10/11/1900"); 
	date a("January 12, 1900"); 
	a.printDate(); 
}