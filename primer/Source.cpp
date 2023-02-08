#include <iostream>

//typedef double Money; 
class Account {
public: 
	Money balance() { return bal;  }
private: 
	Money bal = 65; 
	
	typedef char Money;
};

int main() {
	Account a; 
	std::cout << a.balance(); 
}