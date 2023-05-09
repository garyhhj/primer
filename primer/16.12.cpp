#include <iostream>
#include <vector>

/*
template <typename T> 
class blob {
	typename typedef std::vector<T>::size_type size_type;

public: 
	void push_back(const T& val);
	void pop_back(); 

	T& operator[](size_type size);

private: 
	std::vector<T> data; 

};

template <typename T> 
void blob<T>::push_back(const T& val) {
	blob<T>::data.push_back(val); 
}

template <typename T> 
void blob<T>::pop_back() {
	blob<T>::data.pop_back(); 
}

template <typename A> 
A& blob<A>::operator[](size_type size) {
	return blob<A>::data[size]; 
}


int main() {
	blob<int> b; 
	b.push_back(1); 
	std::cout << b[0] << std::endl; 
}
*/