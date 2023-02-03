
#include <iostream>
#include <memory>

/*
void process(std::shared_ptr<int> p) {
	//use p
	std::cout << p.use_count() << std::endl;
	//p goes out of scope
}

int main() {
	auto p = new int(); 
	auto sp = std::shared_ptr<int>(); 

	//process(sp); //ok, passing shared_ptr into function "process" by value will copy the shared pointer which increments reference count
				 //reference count will be decremented after function "process" finishes executing as shared_ptr goes out of range
				 //incrementing by one then decrementing by one results in the same reference count before and after executing the function 

	//process(new int()) //not ok, implicit conversions from ordinary pointer to smart pointer is not supported 

	//process(p) //not ok, implicit conversions from ordinary pointer to smart pointer is not supported 

	process(std::shared_ptr<int>(p)); //not ok, will result in dangling pointer, initializing shared_ptr with ordinary pointer inside function 
									  //call will create shared_ptr with reference count of 1 sharing the same underlying memory as the raw pointer 
									  //after function call finishes executing that memory will be freed and p will be pointing to freed memory 

	std::cout << *p << std::endl; 
}
*/
