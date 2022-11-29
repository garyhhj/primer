#include <iostream>
#include <vector>
/*
int main() {
	std::vector<int> vi = { 1, 2 }; 

	auto begin = vi.begin(); 

	while (begin != vi.end()) {
		++begin; 
		begin = vi.insert(begin, 42); 
		++begin; 
	}

	for (auto i : vi) {
		std::cout << i << ' '; 
	}

	
}
*/

//removing begin will cause the program to crash in vs 2022
//iterator becomes invalid after insert so we must update them before using 