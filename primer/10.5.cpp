#include <vector>
#include <string>
#include <numeric>
#include <iostream>

int main() {
	std::vector<std::string> vs1 = { "meow", "cat", "meow" }; 
	std::vector<std::string> vs2 = { "meow", "cat", "meow", "meow" }; 

	std::vector<const char*> vs3 = { "meow", "cat", "meow" }; 
	std::vector<const char*> vs4 = { "meow", "cat", "meow", "meow" }; 

	//two std::string
	std::cout << (std::equal(vs1.cbegin(), vs1.cend(), vs2.cbegin()) ? "equal" : "not equal") << std::endl; 

	//two c style string 
	std::cout << (std::equal(vs3.cbegin(), vs3.cend(), vs4.cbegin()) ? "equal" : "not equal") << std::endl; 
}