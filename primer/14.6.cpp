#include <string>
#include <iostream>


class SalesData {
	friend std::ostream& operator<<(std::ostream& ostr, SalesData& salesData);

	friend std::istream& read(std::istream& istr, SalesData& salesData);
	friend void print(const SalesData& salesData);

public:
	SalesData() : bookNo(""), unitsSold(0), revenue(0) {}
	SalesData(const SalesData& newSalesData) : bookNo(newSalesData.bookNo), unitsSold(newSalesData.unitsSold), revenue(newSalesData.revenue) {}
	SalesData(const std::string& newBookNo, const unsigned newUnitsSold, const double newRevenue) : bookNo(newBookNo), unitsSold(newUnitsSold), revenue(newRevenue) {}
	SalesData(const std::string& newBookNo) : bookNo(newBookNo), unitsSold(0), revenue(0) {}
	SalesData(std::istream& istr) : SalesData() { read(istr, *this); }

	SalesData& operator+=(SalesData rhs);

private:
	std::string bookNo;
	unsigned unitsSold;
	double revenue;
};

SalesData& operator+(SalesData& lhs, SalesData& rhs);
std::istream& operator>>(std::istream& istr, SalesData& salesData);
std::ostream& operator<<(std::ostream& ostr, SalesData& salesData);

std::ostream& operator<<(std::ostream& ostr, SalesData& salesData) {
	ostr << "bookNo: " << salesData.bookNo << "\n" <<
		"unitsSold: " << salesData.unitsSold << "\n" <<
		"revenue: " << salesData.revenue << "\n";

	return ostr; 
}


std::istream& read(std::istream& istr, SalesData& salesData) {
	istr >> salesData.bookNo >> salesData.unitsSold >> salesData.revenue;
	return istr;
}

void print(const SalesData& salesData) {
	std::cout << "\n";
	std::cout <<
		"bookNo: " << salesData.bookNo << "\n" <<
		"unitsSold: " << salesData.unitsSold << "\n" <<
		"revenue: " << salesData.revenue << "\n";
	std::cout << std::endl;
	return;
}



int main() {
	SalesData a("meow", 21, 32);

	SalesData b("meow");

	std::cout << a; 

}