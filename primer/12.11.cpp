//the shared_ptr passed to process will have reference count of 1 and refer to same underlying memory as shared_ptr p 
//after process ends, reference count will be decremented and shared_ptr will be freed 
//this creates a dangling pointer p 

#include <iostream>
#include <memory>

/*
void process(std::shared_ptr<int> p) {
	//use p 
	std::cout << p.use_count() << std::endl;
	//p goes out of scope
}

int main() {
	std::shared_ptr<int> p(std::make_shared<int>(2));

	process(std::shared_ptr<int>(p.get())); 

	using namespace std; 

	std::cout << p.use_count(); 
 
}
*/