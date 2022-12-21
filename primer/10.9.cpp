#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> vi; 
	int ele; 

	while (std::cin >> ele) {
		vi.push_back(ele); 
	}


	for (auto i : vi) {
		std::cout << i << ' ';
	} std::cout << std::endl; 

	std::sort(vi.begin(), vi.end()); 

	std::vector<int>::iterator it = std::unique(vi.begin(), vi.end()); 
	for (auto i : vi) {
		std::cout << i << ' ';
	} std::cout << std::endl; 

	vi.erase(it, vi.end()); 
	for (auto i : vi) {
		std::cout << i << ' ';
	} std::cout << std::endl; 

}

