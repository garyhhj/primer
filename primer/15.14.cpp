#include <iostream>
#include <string>

/*
using namespace std;
class base{
public:
	string name() { std::cout << "base name" << std::endl; return basename; } virtual void print(ostream& os) { std::cout << "base print" << std::endl;  os << basename; }
private:
 string basename;
};
class derived : public base {
public:
	void print(ostream& os) { std::cout << "derived print" << std::endl;  base::print(os); os << " " << i; } //change print(os) to base::print(os) to avoid recursive call
private:
	int i;
};

int main() {
	base bobj; base* bp1 = &bobj; base& br1 = bobj; 
	derived dobj; base* bp2 = &dobj; base& br2 = dobj; 

	//a 
	//bobj.print(std::cout); //calls print from base 

	//b
	//dobj.print(std::cout); //calls print from derived which then calls base print

	//c
	//bp1->name(); //calls base name
	
	//d
	//bp2->name(); //calls base name 

	//e 
	//br1.print(std::cout); //calls base print  

	//f
	//br2.print(std::cout); //calls derived print
}
*/