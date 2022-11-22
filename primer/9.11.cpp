#include <array>
#include <vector>
#include <iostream>

int main() {
	std::vector<int> v1; //empty vector 
	std::vector<int> v2(v1); //empty vector 
	std::vector<int> v3 = v1; //empty vector 

	std::vector<int> v4(3); //{0, 0, 0}
	std::vector<int> v5(3, 1); //{1, 1, 1}

	std::vector<int> v6{ 2, 2, 2 }; //{2, 2, 2}
	std::vector<int> v7 = { 2, 2, 2 }; //{2, 2, 2}

	std::vector<int> v8(v6.begin(), v6.end()); // {2, 2, 2}

	return 0; 
}