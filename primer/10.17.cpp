#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

/*
class Sales_data {
public:

	//constructor 
	Sales_data() {

	}

	Sales_data(const std::string& bookName) : bookNo(bookName) {}

	std::string isbn() {
		return bookNo;
	}

private:
	std::string bookNo;
	unsigned int unitsSold;
	double price;
};

int main() {

	std::string bookName; 
	std::vector<Sales_data> bookStore; 
	while (std::cin >> bookName) {
		bookStore.push_back(Sales_data(bookName)); 
	}

	std::cout << "before sorting: \n";
	for (auto book : bookStore) {
		std::cout << book.isbn() << "\n"; 
	}

	std::sort(bookStore.begin(), bookStore.end(),
		[](Sales_data& sd1, Sales_data& sd2) { return sd1.isbn() < sd2.isbn();  
		});

	std::cout << "after sorting: \n";
	for (auto book : bookStore) {
		std::cout << book.isbn() << "\n";
	}
}
*/