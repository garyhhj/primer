#include <iostream>
#include <vector>

/*
//not actually a StrBlob class, just for testing 
class StrBlob {
	friend void print(StrBlob& sb);

public: 
	StrBlob() {
		arr.reserve(3); 
		arr.resize(3);
	}
	void setVal() {
		a = 1; 
		arr[0] = 0; 
		arr[1] = 1; 
		arr[2] = 2; 
	}

	void setVal2() {
		a = 2; 
		arr[0] = 2;
		arr[1] = 1;
		arr[2] = 0;
	}
private: 
	int a; 
	std::vector<int> arr; 
};

void print(StrBlob& sb) {
	std::cout << "a: " << sb.a << "\n";
	std::cout << "arr: " << sb.arr[0] << ", " << sb.arr[1] << ", " << sb.arr[2] << "\n";
}

int main() {
	StrBlob sb1; 
	sb1.setVal();
	print(sb1);

	StrBlob sb2 = sb1; 
	print(sb2);

	sb1.setVal2(); 
	print(sb2); 
}
*/