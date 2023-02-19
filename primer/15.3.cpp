#include <iostream>
#include <string>

/*
class Quote {
	using bookName = std::string; 
public:
	Quote(bookName nName = "", double nPrice = 0) : name(nName), price(nPrice) {
		std::cout << "Quote constructor" << std::endl; 
	};
	virtual ~Quote() {}

	bookName getName() const; 
	virtual double getPrice() const; 

private: 
	bookName name;

protected: 
	double price; 

};

Quote::bookName Quote::getName() const { return name; }
double Quote::getPrice() const { return price; }

class BulkQuote : public Quote{
public: 
	BulkQuote(unsigned qty = 0) {
		std::cout << "BulkQuote constructor" << std::endl; 
	}

	double getPrice(); 
private: 
	unsigned quantity; 
};

double BulkQuote::getPrice() { return quantity * price; }


int main() {
	//Quote meow; 

	//std::cout << "quote info: " << meow.getName() << " " << meow.getPrice() << std::endl << std::endl;

	BulkQuote meow2; 
	std::cout << "bulkQuote info: " << meow2.getName() << " " << meow2.getPrice() << std::endl << std::endl; 
	
}
*/
