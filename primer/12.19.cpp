#include <iostream>
#include <memory>
#include <vector>
#include <string>

/*

*****************
* StrBlobPtr Class
******************

class StrBlobPtr {
public: 
	//constructor
	StrBlobPtr() : curr(0) {}
	StrBlobPtr(std::shared_ptr<std::vector<std::string>> data, size_t sz = 0) : wptr(data), curr(sz) {}
	
	//accessing elements 
	std::string& deref() const; 
	
	//adding elements 
	StrBlobPtr& incr(); 

private: 
	//check function 
	std::shared_ptr<std::vector<std::string>> check(std::size_t, const std::string& msg) const; 

	std::weak_ptr<std::vector<std::string>> wptr; 
	std::size_t curr; //current position in array 
};


std::shared_ptr<std::vector<std::string>> 
StrBlobPtr::check(std::size_t, const std::string& msg) const {
	std::shared_ptr<std::vector<std::string>> ret = wptr.lock();
	
	if (!ret) {
		throw std::runtime_error(msg); 
	}
	else if (curr >= (*ret).size()) {
		throw std::out_of_range(msg); 
	}

	return ret; 
}

std::string& StrBlobPtr::deref() const {
	//call check
	std::shared_ptr<std::vector<std::string>>
		ret = check(curr, "dereferencing vector"); 
	return (*ret)[curr]; 
}

StrBlobPtr& StrBlobPtr::incr() {
	curr += 1; 
	return *this; 
}


***************
* StrBlob Class
****************

class StrBlob {
public:
	friend class StrBlobPtr;
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

	//begin and end 
	StrBlobPtr begin() { return (StrBlobPtr()); }
	StrBlobPtr end() {
		StrBlobPtr ptr((*this).data, (*(*this).data).size());
		return ptr; 
	}



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
