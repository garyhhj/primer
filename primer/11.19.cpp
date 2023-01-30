#include <iostream>
#include <set>

#include <set>
#include <iostream>
#include <string>


class Sales_data {

public:
	Sales_data(const std::string& book_number) {
		this->book_number = book_number;
	}

	void insert_sales_data(const double revenue) {
		this->revenue += revenue;
	}

	std::string isbn() const{
		return book_number;
	}

private:
	std::string book_number;
	double price = 10;
	double revenue = 0.0;
};

bool compare(const Sales_data&  lhs, const Sales_data& rhs) {
	std::cout << "compare 1 called" << std::endl;
	return lhs.isbn() < rhs.isbn();
}


bool compare2(const Sales_data& lhs, const Sales_data& rhs) {
	std::cout << "compare 2 called" << std::endl;
	return lhs.isbn() < rhs.isbn();
}


int main() {
	std::multiset<Sales_data, bool (*)(const Sales_data& lhs, const Sales_data& rhs)> salesdata_booknum(compare);


	salesdata_booknum.insert(Sales_data("aa"));
	salesdata_booknum.insert(Sales_data("bb"));

	std::multiset<Sales_data, bool (*)(const Sales_data& lhs, const Sales_data& rhs)>::iterator 
		salesdata_booknum_it = salesdata_booknum.begin(); 
}
