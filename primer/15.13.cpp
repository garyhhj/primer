#include <iostream>
#include <string>

/*
using namespace std; 
class base{
public:
 string name() { return basename; } virtual void print(ostream & os) { os << basename; }
private:
 string basename;
};
class derived : public base {
public:
	void print(ostream& os) { base::print(os); os << " " << i; } //change print(os) to base::print(os) to avoid recursive call
private:
	int i;
};

int main() {
	derived d; 
	d.print(std::cout); 
}
*/