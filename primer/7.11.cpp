#include <iostream>

#include <string>


class SalesData {
public:
	
	SalesData() = default; 
	SalesData(const std::string& initialBookNo) : bookNo(initialBookNo) {}
	SalesData(const std::string& initialBookNo, const unsigned initialUnitsSold, const double initialRevenue) 
		: bookNo(initialBookNo), unitsSold(initialUnitsSold), revenue(initialRevenue) {}
	SalesData(std::istream& istr);

	std::string isbn() const;
	unsigned getUnitsSold() const;
	double getRevenue() const;

	void changeIsbn(const std::string& newIsbn);
	void changeUnitsSold(const unsigned newUnitsSold);
	void changeRevenue(const double newRevenue);

	SalesData& combine(const SalesData& rhs);

private:
	std::string bookNo = "meow";
	unsigned unitsSold = 0;
	double revenue = 0.0;
};

//functions related to SalesData
SalesData add(SalesData& a, SalesData& b);
std::istream& read(std::istream& istr, SalesData& salesData);
void print(const SalesData& salesData);

//functions related to SalesData definitions
SalesData add(SalesData& a, SalesData& b) {
	SalesData res;
	res.combine(a);
	res.combine(b);
	return res;
}

std::istream& read(std::istream& istr, SalesData& salesData) {
	std::string newBookNo;
	unsigned newUnitsSold;
	double newRevenue;

	istr >> newBookNo >> newUnitsSold >> newRevenue;
	salesData.changeIsbn(newBookNo);
	salesData.changeUnitsSold(newUnitsSold);
	salesData.changeRevenue(newRevenue);
	return istr;
}

void print(const SalesData& salesData) {
	std::cout
		<< "bookNo: " << salesData.isbn() << "\n"
		<< "units sold: " << salesData.getUnitsSold() << "\n"
		<< "revenue: " << salesData.getRevenue() << "\n";
	return;
}

//class member function definitions
SalesData::SalesData(std::istream& istr) { read(istr, *this); }

std::string SalesData::isbn() const { return bookNo; }
unsigned SalesData::getUnitsSold() const { return unitsSold; }
double SalesData::getRevenue() const { return revenue; }

void SalesData::changeIsbn(const std::string& newIsbn) { bookNo = newIsbn; }
void SalesData::changeUnitsSold(const unsigned newUnitsSold) { unitsSold = newUnitsSold; }
void SalesData::changeRevenue(const double newRevenue) { revenue = newRevenue; }

SalesData& SalesData::combine(const SalesData& rhs) {
	unitsSold += rhs.unitsSold;
	revenue += rhs.revenue;
	return *this;
}


int main() {
	SalesData sd1(std::cin); 

	print(sd1); 

}

