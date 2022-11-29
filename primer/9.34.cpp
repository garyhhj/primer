#include <iostream>
#include <vector>

/*
int main() {
	std::vector<int> vi = { 2 ,3 ,4 , 5, 6 }; 

	auto iter = vi.begin(); 
	while (iter != vi.end()) {
		if (*iter % 2) {
			iter = vi.insert(iter, *iter); 
		}
		++iter;
	}
	return 0; 
}
*/

//code in in an infinite loop and will keep inserting the first odd element it sees. 

