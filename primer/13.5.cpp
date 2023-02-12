#include <iostream>
#include <string>


class HasPtr {
public:
	HasPtr(const std::string& s = std::string()) : ps(new std::string(s)), i(0) { }

	HasPtr(const HasPtr& rhs) : i(rhs.i) {
		ps = new std::string(*(rhs.ps));
	}

private:
	std::string* ps; 
	int i;
};

int main() {
	HasPtr hp1("meow"); 

	HasPtr hp2 = hp1; 

	std::string s;
	std::cin >> s;
}