#include <iostream>

struct FuncObj {
	int operator()(int param1, int param2, int param3) {
		return (param1 > 1 ? param2 : param3); 
	}
};

int main() {
	FuncObj funcObj; 
	std::cout << funcObj(2, 3, 4);
}