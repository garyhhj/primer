#include <iostream>
#include <vector>
#include <algorithm>


bool Equals(int i) { return i == 3; }

struct Eq {
	Eq(int nval) : val(nval) {}
	
	bool operator()(int i) {
		return i == val; 
	}

private: 
	int val; 
};

int main() {
	std::vector<int> vi = { 1, 1, 1, 1, 1, 3, 3, 3 };

	std::replace_if(vi.begin(), vi.end(), Eq(3), 2);
	//std::replace_if(vi.begin(), vi.end(), [](int a) {return a == 3; }, 2); 

	for (auto i : vi) {
		std::cout << i << " "; 
	}
}