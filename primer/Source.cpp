#include <iostream>
#include <memory>
#include <vector>
#include <string>

class StrBlob {
public: 
	typedef std::vector<std::string>::size_type size_type; 

	StrBlob(); 
	StrBlob(std::initializer_list<std::string> il); 

	size_type size() const { return data->size(); }
	bool empty() const { return data->empty();  }
	
	//add remove element
	void push_back(const std::string& t) { data->push_back(t);  }
	void pop_back(); 

	//access element 
	std::string& front(); 
	std::string& back(); 

	//printing elements 
	void print(); 


private: 
	std::shared_ptr<std::vector<std::string>> data; 
	
	//throws  msg if data[i] isn't valid 
	void check(size_type i, const std::string& msg) const; 
};

//constructors 
StrBlob::StrBlob() : data(std::make_shared<std::vector<std::string>>()) {}

StrBlob::StrBlob(std::initializer_list<std::string> il) : 
	data(std::make_shared<std::vector<std::string>>(il)) {}

//popback 
void StrBlob::pop_back() {
	check(0, "pop_back on empty StrBlob"); 
	(*data).pop_back(); 
}

//accessing elements 
std::string& StrBlob::front() {
	check(0, "front on empty StrBlob"); 
	return data->front(); 
}

std::string& StrBlob::back() {
	check(0, "back on empty StrBlob"); 
	return data->back(); 
}

void StrBlob::check(size_type i, const std::string& msg) const {
	if (i >= data->size()) {
		throw std::out_of_range(msg); 
	}
}

void StrBlob::print() {
	std::cout << "StrBlob elements: ";  
	for (auto it = data->begin(); it != data->end(); ++it) {
		std::cout << *it << " "; 
	}
	std::cout << std::endl; 
}


int main() {

	/*
	std::shared_ptr<int> ptr1 = std::make_shared<int>(42); 
	
	{
		std::shared_ptr<int> ptr2 = ptr1;
	}

	using namespace std; 
	cout << *ptr1;
	cout << endl; 
	cout << ptr1.use_count(); 
	*/

	StrBlob b; 
	{
		auto a = b;
		a.push_back("meow"); 
	}
	b.print(); 
}