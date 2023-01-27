#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main() {
	std::ifstream ifstr("10.29.txt"); 
	
	std::istream_iterator<std::string> is_it(ifstr), is_eof; 

	std::vector<std::string> vs(is_it, is_eof); 

	for (auto& s : vs) {
		std::cout << s << " "; 
	}
	std::cout << std::endl; 
}