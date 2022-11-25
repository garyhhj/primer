#include <vector>
#include <iostream>


int main() {
	std::vector<int> v;

	int temp;
	temp = v[0]; //error: vector subscript out of range 
	temp = *v.begin(); //error: cannot dereference value intialized vector 
	temp = *v.end(); //error: cannot dereference value intialized vector 
	temp = v.at(0); //error: out_of_range exception  
}