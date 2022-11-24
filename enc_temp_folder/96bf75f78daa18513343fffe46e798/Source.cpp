#include <vector>
#include <iostream>

void print(std::vector<int>& iv) {
	std::cout << "iv: "; 
	for (auto i : iv) {
		std::cout << i << ' '; 
	}
	std::cout << std::endl; 
	return; 
}
int main() {
	std::vector<int> iv = { 1, 2, 3, 4, 5 }; 
	std::vector<int>::iterator iter = iv.begin(), end = iv.end(); 
								//mid = iv.begin() + iv.size() / 2; 


	while (iter != end) {
		using namespace std; 
		cout << *iter << endl; 

		if (*iter == 2) {
			//iv.insert(iter, 4);
			iter = iv.insert(iter, 4); 
			++iter; 
		}

		++iter; 
	}

	iter = iv.insert(iter, 6); 
	if (*iter == 6) {
		std::cout << "meoww "; 
	}
	++iter; 
	using namespace std; 

	cout << *iter << endl; 

	/*
	int someVal = 1; 
	while (iter != mid) {
		if (*iter == someVal) {
			iter = iv.insert(iter, 2 * someVal); 
			++iter; 
		}
		++iter; 
	}
	*/
}