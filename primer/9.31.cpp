#include <iostream>
#include <vector>
#include <forward_list> 
#include <list>

void sillyFli(std::forward_list<int>& fli) {
	auto curr = fli.begin();
	auto prev = fli.before_begin(); 
	
	while (curr != fli.end()) {
		if (*curr % 2) {
			//odd 
			curr = fli.insert_after(curr, *curr); 
			prev = curr; 
			++curr; 
		}
		else {
			curr = fli.erase_after(prev);
		}
	}

	return; 
}

void sillyLi(std::list<int>& li) {
	auto iter = li.begin(); 
	while (iter != li.end()) {
		if (*iter % 2) {
			iter = li.insert(iter, *iter); 
			++iter; ++iter; 
		}
		else {
			iter = li.erase(iter); 
		}
	}
	return; 
}

int main() {
	std::vector<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }; 
	
	std::forward_list<int> fli;
	std::list<int> li; 


	for (int i = vi.size() - 1; i >= 0; --i) {
		li.push_front(vi[i]);
		fli.push_front(vi[i]); 
	}

	sillyFli(fli);
	sillyLi(li); 


	for (auto i : fli) {
		std::cout << i << ' '; 
	}
	std::cout << '\n'; 

	for (auto i : li) {
		std::cout << i << ' '; 
	}
	std::cout << '\n'; 

	
}