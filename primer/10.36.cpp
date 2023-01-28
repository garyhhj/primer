#include <iostream>
#include <list>

int main() {
	std::list<int> li = { 1, 2, 3, 4, 5, 0, 10, 20, 30, 0 }; 


	auto it = std::find(li.rbegin(), li.rend(), 0); 
	std::cout << *it << " "; 


	
}