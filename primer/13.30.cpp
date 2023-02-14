#include <iostream>
#include <string>

/*
class HasPtr {
	friend void swap(HasPtr& lhs, HasPtr& rhs); 
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

	HasPtr& operator=(const HasPtr rhs);


private:
	int* refCount;
	std::string* ps;
	int i;
};

void swap(HasPtr& lhs, HasPtr& rhs) {
	using std::swap; 

	swap(lhs.i, rhs.i); 
	swap(lhs.refCount, rhs.refCount); 
	swap(lhs.ps, rhs.ps); 
}


HasPtr& HasPtr::operator=(HasPtr rhs) {
	std::cout << "calling overloaded assignment operator" << std::endl;
	
	swap(*this, rhs); 
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