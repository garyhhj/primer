#include <vector>
#include <iostream>

std::vector<int>::iterator hasVal(std::vector<int>::iterator begin, std::vector<int>::iterator end, int val) {
	while (begin != end) {
		if (*begin == val) {
			break; 
		}
		++begin;
	}
	return begin;
}

int main() {
	std::vector<int> v;
	for (int i = 0; i <= 10; ++i) {
		v.push_back(i);
	}


	int val;
	std::cin >> val;

	std::cout << "found at position: " << hasVal(v.begin(), v.end(), val) - v.begin() << std::endl;

	return 0;
}