#include <iostream>
#include <map>

/*
int main() {
	std::map<int, int> mp;
	for (int i = 0; i < 10; ++i) {
		mp[i] = i; 
	}

	//lower_bound returns iterator to "first" elements with the key 
	//key is not in container will return c.end()
	std::map<int, int>::iterator lb = mp.lower_bound(1); 

	//upper_bound returns tireator to "last" element with the key 
	//key is not in container will return c.end()
	std::map<int, int>::iterator ub = mp.upper_bound(9); 

	typedef std::map<int, int>::iterator mp_it; 

	//equal_range returns pair of iterator, first one is same as lower_bound, second one is same as upper_bound
	//key is not in container will return std::pair<c.end(), c.end()> 
	std::pair<mp_it, mp_it> pair_mp_it = mp.equal_range(1); 
}
*/