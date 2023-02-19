#include <iostream>
#include <typeinfo>

class Base{

	Base& operator=(const Base&) {
		std::cout << "copy assignment operator invoked" << std::endl; 
		return *this; 
	}

private: 
	int bint = 1; 
};

class Derived : public Base{

private: 
	int dint = 2; 
};

int main() {
	Base b; 

	Derived a; 

//	Base* bp = &a; 

	Derived* dp = &a;
	Base* bp2 = dp;

	int i; 
	std::cin >> i; 
}