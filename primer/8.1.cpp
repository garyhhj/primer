#include <iostream>
#include <string>

std::istream& readAndPrint(std::istream& is) {
	std::string a;
	while (is >> a) {
		std::cout << a << ' ' << std::endl;
	}
	std::cout << std::endl;

	is.clear();
	return is;
}

int main() {
	readAndPrint(std::cin);

	return 0;
}