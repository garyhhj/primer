#include <iostream>


int main() {
	std::cin.tie(&std::cout); 

	std::cin.tie(nullptr);
	std::ostream* oldtie = std::cin.tie(); 

	if (oldtie == &std::cout) {
		std::cout << "tied to cout" << std::endl; 
	}
}