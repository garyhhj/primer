#include <vector>
#include <iostream>
#include <fstream>


std::istream& readAndPrint(std::istream& is) {
	char a; 
	while (is >> a) {
		std::cout << a << ' '; 
	}
	return is; 
}

int main() {
	readAndPrint(std::cin); 

	return 0; 
}