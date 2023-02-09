//understanding order of delegating constructor 
#include <iostream>

/*
class Meow {
public: 
	Meow() : a(1) {
		std::cout << a << std::endl; 
	}

	Meow(int na) : Meow() {
		a = 2; 
		std::cout << a << std::endl; 

	}

	Meow(int na, int nb) : Meow(3) {
		a = 3; 
		std::cout << a << std::endl;
	}
	
	int a; 
};

int main() {
	Meow meow(2, 3); 
}
*/