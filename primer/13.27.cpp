#include <iostream>
#include <string>

/*
class HasPtr {
public:
	HasPtr(const std::string& s = std::string()) 
		: ps(new std::string(s)), i(0), refCount(new int(1)) {}

	HasPtr(const HasPtr& rhs) : 
		ps(rhs.ps), i(rhs.i), refCount(rhs.refCount) {
		//increment refCount 
		++* refCount; 
		std::cout << "calling copy constructor" << std::endl;
	}

	~HasPtr() { 
		std::cout << "calling destructor" << std::endl; 

		if (!-- * refCount) {
			delete refCount; 
			delete ps;
		}
	}

	HasPtr& operator=(const HasPtr& rhs);


private:
	int* refCount; 
	std::string* ps;
	int i;
};

HasPtr& HasPtr::operator=(const HasPtr& rhs) {
	std::cout << "calling overloaded assignment operator" << std::endl;
	
	//self assignment 
	if (ps == rhs.ps) return *this; 
	
	//decrement refCount and delete if necessary 
	if (!-- * refCount) {
		delete refCount; 
		delete ps; 
	}

	++* rhs.refCount; 
	ps = rhs.ps; 
	refCount = rhs.refCount; 
	i = rhs.i; 
	return *this;
}


int main() {
	HasPtr hp1("meow");

	HasPtr hp2; 

	hp2 = hp2; 

	std::string s;
	std::cin >> s;
}

*/