#include <iostream>

class Base {
public: 
	//Base() = default;
	Base() { std::cout << "Base constructor" << std::endl;  }

	virtual ~Base() {}

	
	int getBint() const { return bint; }
	virtual void debug() const { std::cout << "base debug" << std::endl; 
	std::cout << "Base members: " << "\n"; 
	std::cout << "bint: " << bint << "\n"; 
	std::flush(std::cout); 
	}

private: 
	int bint = 1; 
};

class AbstractDerived : public Base {
public: 
	AbstractDerived() = default; 
	//AbstractDerived() { std::cout << "Abstract constructor" << std::endl; };

	void debug() const = 0; 

private: 
	//nothing 

};

class Derived2 : public AbstractDerived {
public:

	Derived2() { std::cout << "Derived2 constructor" << std::endl; }

	void debug() const = 0; 
};

class Derived3 : public Derived2 {
public: 
	Derived3() = default; 

	void debug() const override {
		std::cout << "meow" << std::endl; 
	}

};

int main() {
//	AbstractDerived abd; 

	Derived3 m; 
	m.debug(); 
}