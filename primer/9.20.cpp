#include <list>
#include <deque>
#include <iostream>
/*
void read(std::list<int>& input) {
	int i; 
	while (std::cin >> i) {
		input.push_back(i); 
	}
	std::cin.clear(); 
	return; 
}

void copy(const std::list<int>& input, std::deque<int>& odd, std::deque<int>& even) {
	for (auto it = input.cbegin(); it != input.cend(); ++it) {
		if (*it % 2 == 1) {
			odd.push_back(*it); 
		}
		else {
			even.push_back(*it); 
		}
	}
	return; 
}

void print(const std::list<int>& input, const std::deque<int>& odd, const std::deque<int>& even) {
	std::cout << "list of int: "; 
	for (auto i : input) {
		std::cout << i << ' '; 
	}
	std::cout << '\n'; 

	std::cout << "deque of odd int: "; 
	for (auto i : odd) {
		std::cout << i << ' '; 
	}
	std::cout << '\n'; 

	std::cout << "deque of even int: "; 
	for (auto i : even) {
		std::cout << i << ' '; 
	}
	std::cout << '\n'; 

	std::cout << std::flush; 
	return; 
}


int main() {
	std::list<int> input; 
	read(input); 

	std::deque<int> odd; //odd
	std::deque<int> even; //even
	copy(input, odd, even); 

	print(input, odd, even); 

	return 0; 
}
*/