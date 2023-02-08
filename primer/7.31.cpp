
class Y; 

class X {
public: 
	Y* yptr; 
};

class Y {
	X xobj; 
};

int main() {
	X x; 
	Y y; 
	x.yptr = &y; 
}