#include <iostream>
#include <memory>
#include <string>

/*
int main() {

	//construct n empty string 
	int num_str = 3; 
	std::allocator<std::string> alloc; 
	std::string* sptr = alloc.allocate(num_str); 
	std::string* sptr_cpy = sptr; 

	//read in string and assign 
	std::string word;
	while (std::cin >> word) {
		alloc.construct(sptr++, word); 
	}

	//print 
	for (std::string* it = sptr_cpy; it != sptr; ++it) {
		std::cout << *it << " "; 
	}
	std::cout << std::endl; 

	//delete array 
	while (sptr != sptr_cpy) {
		alloc.destroy(--sptr); 
	}
}
*/