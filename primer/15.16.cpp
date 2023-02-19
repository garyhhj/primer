#include <iostream>
#include <string>

/*
class Quote {
public:
	Quote(std::string nName = "", double nPrice = 0) : name(nName), price(nPrice) {
		std::cout << "Quote constructor" << std::endl;
	};
	virtual ~Quote() {}

	virtual void debug() const;
	std::string getName() const;
	virtual double getPrice() const;


private:
	std::string name;

protected:
	double price;

};

void Quote::debug() const {
	std::cout << "base class members: " << "\n" <<
		"name: " << name << "\n" <<
		"price: " << price << "\n";
}
std::string Quote::getName() const {
	std::cout << "Quote getName called" << std::endl;
	return name;
}
double Quote::getPrice() const {
	std::cout << "Quote getPrice called" << std::endl;
	return price;
}

class QuoteDisc : public Quote {
public: 
	QuoteDisc() = default; 
	QuoteDisc(std::string nName = "", double nPrice = 0) : Quote(nName, nPrice) {
		std::cout << "QuoteDisc constructor" << std::endl; 
	}

	void debug() const = 0; 
	double getPrice() const = 0; 

private: 
	//nothing 
};

class BulkQuote : public QuoteDisc{
public:
	BulkQuote(std::string nName = "", double nPrice = 0, unsigned qty = 0, unsigned minQty = 0, unsigned maxDiscountQty = 0) //: Quote(),  quantity(qty), minQuantity(minQty) {
		: QuoteDisc(nName, nPrice), quantity(qty), minQuantity(minQty), maxDiscountQuantity(maxDiscountQty) {
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

}
*/