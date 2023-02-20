#include <iostream>


//all legal except second inheritance where d inherits privatedly from b and then some class inherites from d 
//page 758 for rules 


/*
class Base {
	void memfcn(Base& b) { b = *this; }
};


class Derivedp : public Base {
public: 
	void memfcn(Base& b) { b = *this; }
};

class Derivedpr : private Base {
public: 
	void memfcn(Base& b) { 
		b = *this; }
};

class Derivedpro : protected Base {
public: 
	void memfcn(Base& b) {
		b = *this; 
	}
};


int main() {
	Base b; 
	Base& br = b; 
	Derivedp dp; 

	br = dp; 

	Derivedpr dpr; 
	br = dpr; 

	Derivedpro dpro; 
	br = dpro; 







	Derivedp dp; 
	dp.memfcn(br); 

	Derivedpr dpr; 
	dpr.memfcn(br); 

	Derivedpro dpro; 
	dpro.memfcn(br); 
	
}
*/