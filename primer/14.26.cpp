#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <utility>

/*
#include "memAllocator.h" //own custom address sanitizer
extern MemAllocator memAllocator;

class StrVec {
	friend void print(const StrVec& strVec);
	friend void swap(StrVec& a, StrVec& b);
public:

	StrVec() : firstElement(nullptr), firstFree(nullptr), cap(nullptr) {}
	StrVec(const std::vector<std::string>& initializer);

	~StrVec(); //destructor
	StrVec(StrVec& rhs); //copy constructor
	StrVec& operator=(const StrVec& rhs); //copy assignment operator

	StrVec(StrVec&& rhs); //move constructor
	StrVec& operator=(StrVec&& rhs) noexcept; //move assignment operator

	std::string& operator[](size_t n); 
	const std::string& operator[](size_t n) const; 

	void push_back(const std::string& arg);
	void pop_back();


private:
	std::string* firstElement;
	std::string* firstFree;
	std::string* cap;
};

void print(const StrVec& strVec) {
	std::string* curr = strVec.firstElement;
	std::cout << "\n";
	std::cout << "strVec: ";
	while (curr != strVec.firstFree) {
		std::cout << *curr << ", ";
		++curr;
	}
	std::cout << "\n" << std::endl;
}

void swap(StrVec& a, StrVec& b) {
	using std::swap;
	swap(a.firstElement, b.firstElement);
	swap(a.firstFree, b.firstFree);
	swap(a.cap, b.cap);
}


StrVec::StrVec(const std::vector<std::string>& initializer) {
	//allocate some memory
	firstElement = new std::string[initializer.size() * 2];
	firstFree = firstElement + initializer.size();
	cap = firstElement + initializer.size() * 2 + 1;

	//fill string
	std::string* curr = firstElement;
	for (const auto& s : initializer) {
		*curr = s;
	}
}


StrVec::StrVec(StrVec& rhs) {
	std::cout << "copy constructor called " << std::endl;

	size_t numElements = rhs.firstFree - rhs.firstElement;

	firstElement = new std::string[numElements * 2];
	firstFree = firstElement + numElements;
	cap = firstElement + numElements * 2 + 1;

	//fill string
	std::string* curr = firstElement;
	while (curr != firstFree) {
		*curr = *(rhs.firstElement + (curr - firstElement));
		++curr;
	}
}

StrVec& StrVec::operator=(const StrVec& rhs) {
	std::cout << "copy assignment operator called" << std::endl;

	size_t numElements = rhs.firstFree - rhs.firstElement;

	delete[] firstElement;
	firstElement = new std::string[numElements * 2];
	firstFree = firstElement + numElements;
	cap = firstElement + numElements * 2 + 1;

	//fill string
	std::string* curr = firstElement;
	while (curr != firstFree) {
		*curr = *(rhs.firstElement + (curr - firstElement));
		++curr;
	}

	return *this;
}

StrVec::StrVec(StrVec&& rhs)
	: firstElement(rhs.firstElement), firstFree(rhs.firstFree), cap(rhs.cap) {
	std::cout << "move constructor called" << std::endl;

	rhs.firstElement = nullptr;
	rhs.firstFree = nullptr;
	rhs.cap = nullptr;
}

StrVec& StrVec::operator=(StrVec&& rhs) noexcept {
	firstElement = rhs.firstElement;
	firstFree = rhs.firstFree;
	cap = rhs.cap;

	rhs.firstElement = nullptr;
	rhs.firstFree = nullptr;
	rhs.cap = nullptr;

	return *this;
}


std::string& StrVec::operator[](size_t n) {
	return *(firstElement + n); 
}

const std::string& StrVec::operator[](size_t n) const {
	return *(firstElement + n); 
}





StrVec::~StrVec() {
	delete[] firstElement;
}

void run() {
	std::vector<std::string> init = { "meow" };

	const StrVec a(init);
	std::cout << a[0] << std::endl;;
}

int main() {
	run();
	memAllocator.memoryInUse();
}
*/