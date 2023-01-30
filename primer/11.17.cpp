#include <iostream>
#include <string>
#include <set>
#include <vector>


int main() {
	std::multiset<std::string> c = { "woof" };
	std::vector<std::string> v = { "meow" };
	
	//copy(v.begin(), v.end(), inserter(c, c.end()));          //legal since inserter inserts elements and insert is supported on multiset 
	//copy(v.begin(), v.end(), back_inserter(c));              //illegal since back_inserter push_back elements and there is no push_back in multiset 
	//copy(c.begin(), c.end(), inserter(v, v.end()));          //legal since inserter inserts elements and insert is supported on vector 
	//copy(c.begin(), c.end(), back_inserter(v));			   //legal since back_inserter push_back elements and push_back is supported on vector 
}