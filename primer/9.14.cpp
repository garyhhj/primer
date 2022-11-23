#include <vector>
#include <list>
#include <string>
#include <iostream>

int main() {
	std::list<char*> lc{ 'a' }; 
	std::vector<std::string> vs; 
	vs.assign(lc.begin(), lc.end()); 
	
}