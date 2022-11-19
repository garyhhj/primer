#include <iostream>
#include <fstream>
#include <string>

/*
class Sales_data;

class Sales_data {
public:
	//member functions
	Sales_data() : bookNo(""), units(0), revenue(0.0) {};

	std::string isbn() const;
	Sales_data& combine(const Sales_data& rhs);
	Sales_data add(const Sales_data& lhs, const Sales_data& rhs);
	std::istream& read(std::istream& is, Sales_data& data);
	std::ostream& print(std::ostream& os, Sales_data& data);


private:
	//class members 
	std::string bookNo;
	unsigned units; //equivalent to unsigned int 
	double revenue;
};

std::string Sales_data::isbn() const {
	return bookNo;
}

Sales_data& Sales_data::combine(const Sales_data& rhs) {
	if (this->bookNo == rhs.bookNo) {
		this->units += rhs.units;
		this->revenue += rhs.revenue;
	}
	return *this;
}

Sales_data Sales_data::add(const Sales_data& lhs, const Sales_data& rhs) {
	Sales_data ans;
	if (lhs.bookNo != rhs.bookNo) {
		return ans;
	}

	ans.bookNo = lhs.bookNo;
	ans.units = lhs.units + rhs.units;
	ans.revenue = lhs.revenue + rhs.revenue;

	return ans;
}

std::istream& Sales_data::read(std::istream& is, Sales_data& data) {
	is >> data.bookNo >> data.units >> data.revenue;
	data.revenue *= data.units;

	return is;
}

std::ostream& Sales_data::print(std::ostream& os, Sales_data& data) {
	os << "bookNo : " << data.bookNo << '\n'
		<< "units  : " << data.units << '\n'
		<< "revenue: " << data.revenue << '\n';
	return os;
}


int main() {
	//argc and argv is very inconvenient in vs, need to keep messing with project properties 

	std::string ifname, ofname;
	std::cin >> ifname >> ofname;

	std::ifstream ifstrm;
	ifstrm.open(ifname);

	std::ofstream ofstrm;
	ofstrm.open(ofname);

	if (!ifstrm) {
		std::cerr << ifname << " cannot be opened" << std::flush;
		return 0;
	}

	if (!ofstrm) {
		std::cerr << ofname << " cannot be opened" << std::flush; 
		return 0; 
	}

	Sales_data total;
	Sales_data trans;

	total.read(ifstrm, total);
	trans.read(std::cin, trans);

	total.combine(trans);
	total.print(ofstrm, total);

	//closing and calling print again
	ofstrm.close(); 
	ofstrm.open(ofname, std::ofstream::app); 
	total.print(ofstrm, total);  
	return 0; 
}
*/
