#include <iostream>

//copy constructor also gets called when being passed to the function 
/*
using std::cout; using std::endl;

class numbered {
public:
	numbered() : mysn(++sn) {}
	int mysn;

	numbered(const numbered& rhs) :mysn(++sn) {
	}

private:
	static int sn;
};

int numbered::sn = 0;

void f(numbered s) {
	cout << s.mysn << endl;
}

int main() {
	numbered a, b = a, c = b;
	f(a);  // 4
	f(b);  // 5
	f(c);  // 6
	numbered d;
	f(d);  // 8

	return 0;
}
*/
