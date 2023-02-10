#include <iostream>
#include <string>

/*
class Account {

public: 
	Account() = default; 
	Account(std::string newOwner, const double newAmount) : owner(newOwner), amount(newAmount) {}

	static double rate(){ return interestRate; }
	void calculate() { amount += amount * interestRate; }

	void print() {
		std::cout << "owner: " << owner << std::endl; 
		std::cout << "interestRate: " << interestRate << std::endl; 
		std::cout << "amount: " << amount << std::endl;
	}
private:

	std::string owner; 
	static double interestRate; 
	double amount; 

	static double initRate() { return 0.1; }

};

double Account::interestRate = 0.1;//initRate(); 


int main() {

	Account a("meow", 2);
	a.print(); 

	a.calculate(); 
	a.print(); 

	Account b("meow", 3); 
	b.print(); 
}
*/