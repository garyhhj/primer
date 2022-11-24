#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <list>

int main() {
	std::list<int> l; 
	std::vector<int> v; 

	std::stringstream ss; 
	std::string line; 
	int e; 

	std::cout << "input for list: " << std::flush; 
	std::getline(std::cin, line); 
	std::cout << std::endl; 

	ss.str(line); 
	while (ss >> e) {
		l.push_back(e); 
	}
	ss.clear(); 

	std::cout << "input for vector: " << std::flush; 
	std::getline(std::cin, line); 
	std::cout << std::endl; 

	ss.str(line); 
	while (ss >> e) {
		v.push_back(e); 
	}
	ss.clear();

	auto itl = l.begin(); 
	auto itv = v.begin(); 

	while (itl != l.end() && itv != v.end()) {
		if (*itl < *itv) {
			std::cout << "l < v" << std::endl; 
			return 0; 
		}
		else if (*itl > *itv) {
			std::cout << "l > v" << std::endl; 
			return 0; 
		}

		++itl; ++itv; 
	}

	if (l.size() == v.size()) {
		std::cout << "l == v" << std::endl;
	}
	else if (l.size() < v.size()){
		std::cout << "l < v" << std::endl; 
	}
	else { //l.size() > v.size() 
		std::cout << "l > v" << std::endl; 
	}

	return 0; 
}