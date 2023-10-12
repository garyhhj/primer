#include <iostream>
#include <string>

template<typename T> 
int compare(const T& a, const T& b) {
	if (a < b) return 1; 
	if (a > b) return -1; 
	return 0; 
}

int main() {
	std::cout << compare<std::string>("meow", "me") << std::endl;
}