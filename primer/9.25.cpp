#include <vector>
#include <iostream>

/*
void print(std::vector<int>& v) {
	std::cout << "printing v: "; 
	for (auto i : v) {
		std::cout << i << ' ';
	}std::cout << std::endl;
}

int main() {
	std::vector<int> v = {1};

	print(v); 

	v.erase(v.end(), v.end());

	print(v); 

}
*/

//if they are both the same iterator, then nothing will get erased 

//if elem2 is off the end iterator, then every element from elem1 to elem2 will get erased