#include <iostream>
#include <string>
#include <vector>

struct Bound {

	Bound(int l, int h) : lower(l), higher(h) {}

	bool operator()(const std::string& s) { return lower <= s.size() && s.size() <= higher; }

private:
	int lower; 
	int higher; 
};


int main() {
	Bound b(1, 10); 

	std::vector<std::string> vs; 

	std::string s; 
	while (std::cin >> s) {
		vs.push_back(s);
	}
	
	int count = 0; 
	for (const auto& s : vs) {
		if (b(s)) ++count; 
	}

	std::cout << "num obj: " << count << std::endl; 
}