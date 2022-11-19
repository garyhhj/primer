#include <iostream>
#include <sstream>
#include <string>

std::istream& read(std::istream& is) {
	std::string a;
	while (is >> a) {
		std::istringstream isstrm(a); 

		isstrm >> a; 
		std::cout << a << '\n'; 
	}
	std::cout << std::endl;

	is.clear();

	return is;
}

int main() {
	read(std::cin);

	return 0;
}