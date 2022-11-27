#include <iostream>
#include <forward_list>

int main() {
	std::forward_list<int> flst = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 

	std::forward_list<int>::iterator curr = flst.begin(); 
	std::forward_list<int>::iterator prev = flst.before_begin(); 

	for (; curr != flst.end(); ) {
		if (*curr % 2 == 1) {
			curr = flst.erase_after(prev); 
		}
		else {
			prev = curr; 
			++curr; 
		}
	}

	std::cout << "flst: "; 
	for (const auto i : flst) {
		std::cout << i << ' '; 
	}
	std::cout << std::endl; 

	return 0; 
}