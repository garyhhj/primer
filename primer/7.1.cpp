#include <string>
#include <iostream>

/*
struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

bool read(std::istream& istr, Sales_data& total) {
	std::string bookNoTemp; 
	unsigned units_soldTemp; 
	double revenueTemp; 

	istr >> bookNoTemp >> units_soldTemp >> revenueTemp; 
	if (!istr) {
		return false; 
	}
	
	total.bookNo = bookNoTemp; 
	total.units_sold = units_soldTemp; 
	total.revenue = revenueTemp; 
}

void add(Sales_data& rhs, const Sales_data& lhs) {
	if (rhs.bookNo == lhs.bookNo) {
		rhs.units_sold += lhs.units_sold; 
		rhs.revenue += lhs.revenue; 
	}
}

void print(const Sales_data& obj) {
	std::cout << "sales data: " 
		<< "book name : " << obj.bookNo << "\n" 
		<< "units sold: " << obj.units_sold << "\n"
		<< "revenue   : " << obj.revenue << "\n";
	std::flush(std::cout); 
}

int main() {

	Sales_data total; 
	total.bookNo = "meow"; 

	Sales_data temp; 
	while (read(std::cin, temp)) {
		add(total, temp); 
		print(temp);

	}

	std::cout << "final total: "; 
	print(total); 

}
*/