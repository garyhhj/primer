#include <iostream>
#include <vector>
#include <list>



int main() {
	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 }; 
	
	std::vector<int> v; 
	std::list<int> l; 

	//copy element 
	for (const auto i : ia) {
		v.push_back(i); 
		l.push_back(i); 
	}

	for (auto it = v.begin(); it != v.end(); ) {
		if (*it % 2 == 0) {
			it = v.erase(it); 
		}
		else {
			++it; 
		}
	}


	for (auto it = l.begin(); it != l.end(); ) {
		if (*it % 2 == 1) {
			it = l.erase(it); 
		}
		else {
			++it; 
		}
	}

	std::cout << "v: "; 
	for (const auto i : v) {
		std::cout << i << ' '; 
	}
	std::cout << '\n'; 

	std::cout << "l: "; 
	for (const auto i : l) {
		std::cout << i << ' '; 
	}
	std::cout << '\n'; 


	return 0; 
}