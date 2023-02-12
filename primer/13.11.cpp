#include <iostream>
#include <string>

/*
class HasPtr {
public:
	HasPtr(const std::string& s = std::string()) : ps(new std::string(s)), i(0) { }

	HasPtr(const HasPtr& rhs) : ps(new std::string(*(rhs.ps))), i(rhs.i) {
		std::cout << "calling copy constructor" << std::endl;
	}

	~HasPtr() { delete ps; }

	HasPtr& operator=(const HasPtr& rhs);


private:

	std::string* ps;
	int i;
};

HasPtr& HasPtr::operator=(const HasPtr& rhs) {
	std::cout << "calling overloaded assignment operator" << std::endl;
	if (rhs.ps == this->ps) return *this;
	delete ps;
	ps = new std::string(*(rhs.ps));
	i = rhs.i;
	return *this;
}


int main() {
	HasPtr hp1("meow");

	HasPtr hp2;

	hp2.operator=(hp1); 

	std::string s;
	std::cin >> s;
}
*/