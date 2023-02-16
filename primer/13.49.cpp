#include <iostream>
#include <string>
#include <vector>
#include <memory>

#include "memAllocator.h" //own custom address sanitizer 
extern MemAllocator memAllocator;

class StrVec {
	friend void print(const StrVec& strVec);
public: 

	StrVec() : firstElement(nullptr), firstFree(nullptr), cap(nullptr) {}
	StrVec(const std::vector<std::string>& initializer); 

	~StrVec(); //destructor 
	StrVec(StrVec& rhs); //copy constructor 
	StrVec& operator=(const StrVec rhs); //copy assignment operator  
	
	StrVec(StrVec&& rhs); //move constructor 
	StrVec& operator=(StrVec&& rhs); //move assignment operator 

	void push_back(const std::string& arg); 
	void pop_back(); 


private: 
	std::string* firstElement; 
	std::string* firstFree; 
	std::string* cap;
};

void print(const StrVec& strVec) {
	std::string* curr = strVec.firstElement;
	std::cout << "strVec: "; 
	while (curr != strVec.firstFree) {
		std::cout << *curr << ", "; 
		++curr; 
	}
	std::cout << std::endl; 
}

StrVec::StrVec(const std::vector<std::string>& initializer) {
	//allocate some memory 
	firstElement = new std::string[initializer.size() * 2]; 
	firstFree = firstElement + initializer.size(); 
	cap = firstElement + initializer.size() * 2 + 1; 

	//fill string
	
	
}

StrVec::~StrVec() {
	delete[] firstElement; 
}


void run() {
	std::vector<std::string> init = { "meow" };
	StrVec a(init);
}

int main() {

	run(); 
	memAllocator.memoryInUse(); 
}