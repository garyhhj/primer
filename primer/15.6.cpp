#include <iostream>
#include <string>


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

Quote::bookName Quote::getName() const {
	std::cout << "Quote getName called" << std::endl;
	return name;
}
double Quote::getPrice() const {
	std::cout << "Quote getPrice called" << std::endl;
	return price;
}

class BulkQuote : public Quote{
public:
	BulkQuote(unsigned qty = 0, unsigned minQty = 0) //: Quote(),  quantity(qty), minQuantity(minQty) {
		: quantity(qty), minQuantity(minQty) {
		std::cout << "BulkQuote constructor" << std::endl;
	}


	double getPrice() const override;
private:
	unsigned quantity;
	unsigned minQuantity;
};


double BulkQuote::getPrice() const {
	std::cout << "BulkQuote getPrice called" << std::endl;
	return (quantity > minQuantity ? (price - 1) * quantity : price * quantity);
}

void printTotal(Quote& quoteObj) {
	std::cout << "calling print total: "; 
	std::cout << quoteObj.getPrice() << std::endl; 
}


int main() {
	BulkQuote meow2;
	//std::cout << "bulkQuote info: " << meow2.getName() << " " << meow2.getPrice() << std::endl << std::endl;
	Quote meow1; 

	printTotal(meow1); 
}

