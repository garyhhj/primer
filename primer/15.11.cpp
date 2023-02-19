#include <iostream>
#include <string>


class Quote {
	using bookName = std::string;
public:
	Quote(bookName nName = "", double nPrice = 0) : name(nName), price(nPrice) {
		std::cout << "Quote constructor" << std::endl;
	};
	virtual ~Quote() {}

	virtual void debug() const; 
	bookName getName() const;
	virtual double getPrice() const;


private:
	bookName name;

protected:
	double price;

};

void Quote::debug() const {
	std::cout << "base class members: " << "\n" <<
		"name: " << name << "\n" <<
		"price: " << price << "\n"; 
}
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
	BulkQuote(unsigned qty = 0, unsigned minQty = 0, unsigned maxDiscountQty = 0) //: Quote(),  quantity(qty), minQuantity(minQty) {
		: Quote(), quantity(qty), minQuantity(minQty), maxDiscountQuantity(maxDiscountQty) {
		std::cout << "BulkQuote constructor" << std::endl;
	}

	void debug() const override; 
	double getPrice() const override;
private:
	unsigned quantity;
	unsigned minQuantity;
	unsigned maxDiscountQuantity;
};

void BulkQuote::debug() const {
	this->Quote::debug();

	std::cout << "BulkQuote members: " << "\n" <<
		"quantity: " << quantity << "\n" <<
		"minQuantity: " << minQuantity << "\n" <<
		"maxDiscountQuantity: " << maxDiscountQuantity << "\n"; 
}

double BulkQuote::getPrice() const {
	std::cout << "BulkQuote getPrice called" << std::endl;

	if (quantity < minQuantity) return price * quantity;
	else if (quantity < maxDiscountQuantity) return (price - 1) * quantity;
	else return (price - 1) * maxDiscountQuantity + price * (quantity - maxDiscountQuantity);

}


int main() {
	BulkQuote meow2;
	Quote meow; 

	meow2.debug(); 
}
