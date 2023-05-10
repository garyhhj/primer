#include <iostream>
#include <vector>

#include <algorithm>

/*

template<typename T> 
typename T::value_type top(const T& c) {
	if (!c.empty()) {
		return c.back(); 
	}
	else {
		
		//T::value_type(), value_type() can be a value initialized built-in type which doesn't call constructor 
		return typename T::value_type(); 

		//return typename T::value_type();, typename indicates that "T::value_type" is a type and the brackets 
		//tells the compiler to value initialize that type and return it  
		
	}
}

class Evan {
public: 
	Evan(int v) : data(v) {}; 

	int data = 1; 
};

inline bool operator<(const Evan& lhs, const Evan& rhs) {
	std::cout << "overloaded < operator for Evan" << std::endl; 
	return lhs.data < rhs.data; 
}

inline std::ostream& operator<<(std::ostream& os, const Evan& e) {
	os << e.data; 
	return os; 
}

template <typename T> 
class Pred {
public: 
	
	bool operator()(const T& lhs, const T& rhs) {
		using std::less; 
		return less<T>{}(lhs, rhs);
	}

};


class PredNonTemplate {
public: 


	/*
	bool operator()(const int& lhs, const int& rhs) {
		std::less<int> l; 
		return l(lhs, rhs);
	}
	*/
};

class Big {
public: 
	Big(int a = 1) : data(a){}

	Big(const Big& b) : data(b.data) {
		std::cout << "copy constructor called" << std::endl; 
	}
	Big& operator=(const Big& b) {
		std::cout << "copy assignment operator called" << std::endl; 
		this->data = b.data; 
		return *this; 
	}

	const int getData() {
		return this->data; 
	}
private: 
	int data; 
};



int main() {
	Big b;
	Big b2(2); 
	Big b3(3); 

	//b = b3; 
	Big b4 = b3 = b2 = b; 

	std::cout << b4.getData() << std::endl; 

	/*
	Evan e1(1); 
	Evan e2(2); 
	Evan e3(3); 

	std::vector<Evan> vi = { e3, e2, e1 };
	//std::cout << top(vi) << std::endl; ;

	//how to pass class 
	PredNonTemplate p1;
	PredNonTemplate p2(); 


	std::sort(vi.begin(), vi.end(), Pred<Evan>{});
	
	for (Evan i : vi) {
		std::cout << i; 
		std::cout << ", ";
	}
	*/


	int a = 1; 
	//int& b[] = { a, a, a }; 

	//int& b = NULL; 

	//std::move(b);
	/*
	Pred<int> p{};
	

	std::sort(vi.begin(), vi.end(), Pred<int>{});

	std::cout << "vi: "; 
	for (auto i : vi) {
		std::cout << i << " ,"; 
	}
	std::cout << std::endl; 
	*/
}
*/