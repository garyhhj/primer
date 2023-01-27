#include <vector>
#include <list>
#include <algorithm>
#include <iostream>

int main() {
	std::vector<int> vi; 
	std::list<int> li; 

	int i; 
	while (std::cin >> i) {
		vi.push_back(i); 
	}
	
	std::unique_copy(vi.begin(), vi.end(), std::back_inserter(li)); 

	for (auto i : li) std::cout << i << " "; 
}