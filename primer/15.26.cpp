#include <iostream>
#include <string>


/*
#include "memAllocator.h"

extern MemAllocator memAllocator;



class Quote {
public:
	Quote(std::string nName = "", double nPrice = 0) : name(nName), price(nPrice) {
		std::cout << "Quote constructor" << std::endl;
	};
	virtual ~Quote() {}

	Quote(const Quote& rhs) {
		std::cout << "Quote copy constructor" << std::endl; 
		name = rhs.name; 
		price = rhs.price; 
	}

	Quote& operator=(const Quote& rhs) {
		std::cout << "Quote copy assignment operator" << std::endl;	
		name = rhs.name; 
		price = rhs.price; 
		return *this; 
	}

	Quote(Quote&& rhs) { 
		std::cout << "Quote move constructor" << std::endl; 
		name = rhs.name; 
		price = rhs.price; 

		rhs.name = "";
		rhs.price = 0; 
	}

	Quote& operator=(Quote&& rhs) {
		std::cout << "Quote move assignment operator" << std::endl; 
		name = rhs.name; 
		price = rhs.price; 

		rhs.name = "";
		rhs.price = 0; 
		return *this; 
	}


	virtual void debug() const;

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


class QuoteDisc : public Quote {
public:
	QuoteDisc(std::string nName = "", double nPrice = 0) : Quote(nName, nPrice) {
		std::cout << "QuoteDisc constructor" << std::endl;
	}


	void debug() const = 0;
	virtual double getPrice() const = 0;

private:
	//nothing
};

class BulkQuote : public QuoteDisc{
public:
	//constructor 
	BulkQuote(std::string nName = "", double nPrice = 0, unsigned qty = 0, unsigned minQty = 0, unsigned maxDiscountQty = 0) //: Quote(),  quantity(qty), minQuantity(minQty) {
		: QuoteDisc(nName, nPrice), quantity(qty), minQuantity(minQty), maxDiscountQuantity(maxDiscountQty) {
		std::cout << "BulkQuote constructor" << std::endl;
	}

	BulkQuote(const BulkQuote& bq) : QuoteDisc(bq){
		std::cout << "BulkQuote copy constructor" << std::endl; 
		

		quantity = bq.quantity; 
		minQuantity = bq.minQuantity; 
		maxDiscountQuantity = bq.maxDiscountQuantity; 
	}

	BulkQuote& operator=(const BulkQuote& bq) {

		std::cout << "Bulk Quote copy assignment operator" << std::endl; 
		QuoteDisc::operator=(bq); 

		quantity = bq.quantity; 
		minQuantity = bq.minQuantity; 
		maxDiscountQuantity = bq.maxDiscountQuantity; 
		return *this; 
	}

	BulkQuote(BulkQuote&& bq) : QuoteDisc(bq) {
		std::cout << "Bulk Quote move constructor" << std::endl; 
		

		quantity = bq.quantity; 
		minQuantity = bq.minQuantity; 
		maxDiscountQuantity = bq.maxDiscountQuantity; 

		bq.quantity = 0; 
		bq.minQuantity = 0; 
		bq.maxDiscountQuantity = 0; 
	}

	BulkQuote& operator=(BulkQuote&& bq) {
		std::cout << "Bulk Quote move assignment operator" << std::endl; 
		QuoteDisc::operator=(bq); 

		quantity = bq.quantity; 
		minQuantity = bq.minQuantity; 
		maxDiscountQuantity = bq.maxDiscountQuantity; 


		bq.quantity = 0; 
		bq.minQuantity = 0; 
		bq.maxDiscountQuantity = 0; 

		return *this; 
	}

	double getPrice() const override; 

	void debug() const override;
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
	std::cout << "getting price for bulkquote" << std::endl; 
	return 1; 
}

void run() {
	//Quote meow; 


	BulkQuote bq; 
	BulkQuote bq2;

	std::cout << std::endl << std::endl;

	Quote* meow = &bq; 
	
	meow->operator=(bq); 

}

int main() {
	run();
	memAllocator.memoryInUse(); 
}
	*/