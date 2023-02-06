#include <iostream>

#include <string>

class SalesData {
public: 

	std::string isbn() const; 
	SalesData& combine(const SalesData& rhs); 
	void print() const;

private: 
	std::string bookNo = "meow";
	unsigned units_sold = 2;
	double revenue = 3.1;
};


std::string SalesData::isbn() const {
	return bookNo; 
}

SalesData& SalesData::combine(const SalesData& rhs) {
	units_sold += rhs.units_sold; 
	revenue += rhs.revenue; 
	return *this; 
}

void SalesData::print() const {
	std::cout 
		<< "bookname  : " << bookNo << "\n"
		<< "units sold: " << units_sold << "\n"
		<< "revenue   : " << revenue << "\n"; 
	std::flush(std::cout); 
	return; 
}


int main() {
	SalesData sd1, sd2; 
	sd1.combine(sd2); 
	sd1.print();
	std::cout << sd1.isbn() << std::endl; 

}

