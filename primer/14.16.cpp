//will define comparison operator for salesData class 


#include <string>
#include <iostream>

/*
class SalesData {
	friend SalesData operator+(SalesData& lhs, SalesData& rhs);
	friend std::ostream& operator<<(std::ostream& ostr, SalesData& salesData);
	friend std::istream& operator>>(std::istream& istr, SalesData& salesData);
	friend bool operator==(const SalesData& lhs, const SalesData& rhs);
	friend bool operator!=(const SalesData& lhs, const SalesData& rhs);


	friend std::istream& read(std::istream& istr, SalesData& salesData);
	friend void print(const SalesData& salesData);

public:
	SalesData() : bookNo(""), unitsSold(0), revenue(0) {}
	SalesData(const SalesData& newSalesData) : bookNo(newSalesData.bookNo), unitsSold(newSalesData.unitsSold), revenue(newSalesData.revenue) {}
	SalesData(const std::string& newBookNo, const unsigned newUnitsSold, const double newRevenue) : bookNo(newBookNo), unitsSold(newUnitsSold), revenue(newRevenue) {}
	SalesData(const std::string& newBookNo) : bookNo(newBookNo), unitsSold(0), revenue(0) {}
	SalesData(std::istream& istr) : SalesData() { read(istr, *this); }

	SalesData& operator+=(const SalesData& rhs);

private:
	std::string bookNo;
	unsigned unitsSold;
	double revenue;
};

SalesData& SalesData::operator+=(const SalesData& rhs) {
	if (bookNo != rhs.bookNo) {
		return *this;
	}

	unitsSold += rhs.unitsSold;
	revenue += rhs.revenue;
	return *this;
}


SalesData operator+(SalesData& lhs, SalesData& rhs);
std::istream& operator>>(std::istream& istr, SalesData& salesData);
std::ostream& operator<<(std::ostream& ostr, SalesData& salesData);
bool operator==(const SalesData& lhs, const SalesData& rhs); 
bool operator!=(const SalesData& lhs, const SalesData& rhs);


SalesData operator+(SalesData& lhs, SalesData& rhs) {
	SalesData newSalesData;
	newSalesData += lhs;
	newSalesData += rhs;

	return newSalesData;
}


std::istream& operator>>(std::istream& istr, SalesData& salesData) {
	istr >> salesData.bookNo >> salesData.unitsSold >> salesData.revenue;
	if (!istr) {
		salesData = SalesData();
	}
	return istr;
}

std::ostream& operator<<(std::ostream& ostr, SalesData& salesData) {
	ostr << "bookNo: " << salesData.bookNo << "\n" <<
		"unitsSold: " << salesData.unitsSold << "\n" <<
		"revenue: " << salesData.revenue << "\n";

	return ostr;
}

bool operator==(const SalesData& lhs, const SalesData& rhs) {
	return lhs.bookNo == rhs.bookNo &&
		lhs.revenue == rhs.revenue &&
		lhs.unitsSold == rhs.unitsSold; 
}

bool operator!=(const SalesData& lhs, const SalesData& rhs) {
	return !(lhs == rhs); 
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

	SalesData b("meow", 21, 32);

	if (a != b) {
		std::cout << "eq" << std::endl; 
	}
	else {
		std::cout << "not eq" << std::endl; 
	}
	std::cout << a << std::endl;
}
*/