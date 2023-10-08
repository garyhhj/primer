#include <iostream>
#include <memory>

/*
class DebugDelete {
public: 
	template <typename T> 
	void operator()(T* obj) {
		std::cout << "deleting object of size " << sizeof(obj) << std::endl; 
		delete obj; 
	}
};

int main() {
	
	//std::shared_ptr<int, DebugDelete>(std::make_shared(1), DebugDelete{}); 

	//DebugDelete deleter;  


	std::unique_ptr<int, DebugDelete> p(new int(2), DebugDelete());
	std::shared_ptr<int> p1(new int(3), DebugDelete());

}
*/