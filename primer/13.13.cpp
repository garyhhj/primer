//define some stuff and try out things 

/*
#include <iostream>
#include <vector>
class Meow {
	friend void print(const Meow& meow);

public: 
	Meow() {
		arr = new int[3]; 
	}

	explicit Meow(int ni, int narr[3], std::vector<int>& nvi)
		: a(ni), arr(new int[3]{narr[0], narr[1], narr[2]}), vi(nvi) {}

	//copy constructor 
	Meow(const Meow& rhs) 
		: a(rhs.a), arr(new int[3]{rhs.arr[0], rhs.arr[1], rhs.arr[2]}), vi(rhs.vi) {
		std::cout << "copy constructor invoked" << std::endl; 
	}

	~Meow() {
		std::cout << "destructor invoked" << std::endl; 
		delete[] arr; 
	}

	//copy assignment operator 
	Meow& operator=(const Meow& rhs) {
		std::cout << "copy assignment operator invoked" << std::endl; 
		if (rhs.arr == this->arr) return *this; 
		delete[] arr; 
		a = rhs.a; 
		arr = new int[3] {rhs.arr[0], rhs.arr[1], rhs.arr[2]}; 
		vi = rhs.vi; 
		return *this; 
	}



private: 
	int a; 
	int* arr; 
	std::vector<int> vi; 

};

void print(const Meow& meow) {
	std::cout << "a: " << meow.a << "\n";
	
	std::cout << "arr: "; 
	for (int i = 0; i < 3; ++i) {
		std::cout << meow.arr[i] << ", "; 
	}
	std::cout << "\n"; 

	std::cout << "vi: "; 
	for (const auto i : meow.vi) {
		std::cout << i << ", "; 
	}
	std::cout << "\n"; 
}

Meow testing(Meow* a) {

	std::cout << "testing" << std::endl; 

	return *a; 
}

int main() {

	std::vector<int> vi = { 3, 2, 1 }; 
	
	Meow* a = new Meow; 
	testing(a); 


	int i; 
	std::cin >> i; 

}
*/
