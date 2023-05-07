//#include <iostream>
//#include <vector>
//#include <list>
//
//template<typename itT, typename containerT, typename containerValT> 
//bool find(const itT& begin, const itT& end, const containerT& container, const containerValT& val) {
//	itT curr = begin; 
//	while (curr != end) {
//		if (*curr == val) {
//			return true; 
//		}
//		++curr; 
//	}
//
//	return false; 
//}
//
//int main() {
//	std::vector<int> vi = { 1, 2, 3, 4, 5, 6 }; 
//	std::list<int> li = { 1, 2, 3, 4, 5, 6, }; 
//	
//	
//	std::cout << (find(vi.begin(), vi.end(), vi, 0) ? 1 : -1) << std::endl;
//
//}