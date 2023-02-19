#include <iostream>

class Base {
public: 
	virtual void f1() { std::cout << "base f1" << std::endl; }
	virtual void f2() { std::cout << "base f2" << std::endl; }
private: 
};

class Derived : public Base {
public: 
	void f1() override { std::cout << "derived f1" << std::endl; }
	void f2(int a) final  { std::cout << "derived f2" << std::endl; }
};

int main() {
	Derived d; 

	d.f1(); 
	d.f2(); 
}