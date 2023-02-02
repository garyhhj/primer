#include <iostream>
#include <memory>
#include <vector>


std::shared_ptr<std::vector<int>> factory() {
	return std::make_shared<std::vector<int>>(); 
}

void read(std::shared_ptr<std::vector<int>> pvi) {
	
	int i; 
	while (std::cin >> i) {
		pvi->push_back(i); 
	}
}

void print(std::shared_ptr<std::vector<int>> pvi) {
	for (auto it = pvi->begin(); it != pvi->end(); ++it) {
		std::cout << *it << " "; 
	}
	std::cout << std::endl; 
}



int main() {
	auto pvi = factory(); 

	read(pvi); 
	print(pvi); 

}
