#include <iostream>


using namespace std; 
class Base {
public:
	virtual int fcn() {
		cout << "base fcn" << endl;
	}
};
class D1 : public Base {
public:
	// hides fcn in the base; this fcn is not virtual
	// D1 inherits the definition of Base::fcn()
	
	int fcn() override { cout << "d1 fcn" << endl; } //virtual call resolved during runtime if called from a pointer or reference 
	int fcn(int) {
		cout << "d1 fcn int" << endl;
	} // parameter list differs from fcn in Base
	virtual void f2() {
		cout << "d1 f2" << endl;
	}
		// new virtual function that does not exist in Base
};
class D2 : public D1 {
public:
	int fcn(int) { cout << "d2 fcn int" << endl; }
		// nonvirtual function hides D1::fcn(int)
	int fcn() { cout << "d2 fcn" << endl; }
	
	// overrides virtual fcn from Base
	void f2() {
		cout << "d2 f2" << endl;
	}
		 // overrides virtual f2 from D1
};
