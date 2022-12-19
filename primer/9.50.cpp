#include <vector>
#include <string>
#include <iostream>

int main() {
	std::vector<std::string> vs = { "12.1", "23", "34"};

	//int sum = 0; 
	double sum = 0.0; 
	for (auto& i : vs) {
		//sum += std::stoi(i); 
		sum += std::stod(i); 
	}
	std::cout << sum << std::endl; 	
}