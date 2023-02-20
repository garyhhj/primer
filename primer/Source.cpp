#include <iostream>

class Base {

};

class Derived : protected Base {

};



int main() {
	
	Base* b; 

	Derived d; 

	b = &d; 
}