#include <vector>
#include <iostream>

/*
int main() {
	std::vector<int> vi; 

	int currSize = vi.size(); 
	int currCapcity = vi.capacity(); 
	
	std::cout << "size: " << currSize << " capacity: " << currCapcity << std::endl; 

	int loop = 100; 
	while (loop--) {
		vi.push_back(1); 

		if (vi.capacity() != currCapcity) {
			currCapcity = vi.capacity(); 
			currSize = vi.size(); 
			std::cout << "size: " << currSize << " capacity: " << currCapcity << std::endl;
		}
	}

	return 0; 
}
*/

//capacity follows this pattern a(n) = floor(a(n-1)*3/2) with a(1) = 2