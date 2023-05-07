#include <iostream> 
#include <vector>
#include <memory>
#include <list>

#include <string>


template <typename T> class Blob {
public: 
	typedef T value_type; 
	typedef typename std::vector<T>::size_type size_type; 

	Blob() : data(std::make_shared<std::vector<T>>()) {}
	//Blob(std::initializer_list<T>& ref); //copy constructor 

	size_type size() const { return data->size(); }

	bool empty() const { return data->empty();  }

	void push_back(const T& val) {
		data->push_back(val); 
	}

private: 
	std::shared_ptr<std::vector<T>> data; 
};

int main() {
	//std::shared_ptr<int> ptr = std::make_shared<int>(2); 

	Blob<int> b; 
	if (b.empty()) {
		std::cout << "blob is empty" << std::endl; 
	}
	else {
		std::cout << "blob is not empty" << std::endl; 
	}
}