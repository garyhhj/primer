#include <iostream>
#include <vector>
#include <numeric>

int main() {
	std::vector<int> vi; 
	int ele; 
	while (std::cin >> ele) {
		vi.push_back(ele); 
	}

	int sum = std::accumulate(vi.cbegin(), vi.cend(), 0); 
	std::cout << sum << std::endl; 
}
