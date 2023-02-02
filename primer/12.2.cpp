#include <iostream>
#include <memory>
#include <vector>
#include <string>

/*
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
	const std::string& front() const;

	std::string& back(); 
	const std::string& back() const; 

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
	std::cout << "calling normal front" << std::endl; 
	check(0, "front on empty StrBlob"); 
	return data->front(); 
}

const std::string& StrBlob::front() const {
	std::cout << "calling const overloaded front" << std::endl; 
	check(0, "front on empty StrBlob"); 
	return data->front(); 
}

std::string& StrBlob::back() {
	std::cout << "calling normal back" << std::endl; 
	check(0, "back on empty StrBlob"); 
	return data->back(); 
}

const std::string& StrBlob::back() const {
	std::cout << "calling const overloaded back" << std::endl; 

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

	
	StrBlob b({"meow"});
	auto& s = b.front(); 
	s = "woof"; 
	b.print(); 
}
*/
