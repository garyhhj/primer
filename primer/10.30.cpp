#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main() {

	std::istream_iterator<int> is_it(std::cin), is_eof; 
	std::vector<int> vi(is_it, is_eof); 

	std::sort(vi.begin(), vi.end()); 

	for (auto i : vi) std::cout << i << " "; 
}