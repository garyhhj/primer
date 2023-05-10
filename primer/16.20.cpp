#include <iostream>
#include <vector>


template <typename T>
void print(const T& container) {
	typedef typename T::const_iterator itType;

	std::cout << "conatiner: ";
	for (itType it = container.begin(); it != container.end(); ++it) {
		std::cout << *it << ", "; 
	}
	std::cout << std::endl; 
}

int main() {

	std::vector<int> meow = { 1, 2, 3, 4 };
	print(meow);
}