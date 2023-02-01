#include <map>
#include <iostream>
#include <string>

/*
void print(std::multimap<std::string, std::string>& author_booknames) {
	for (auto& author_bookname : author_booknames) {
		std::cout << author_bookname.first << " : " << author_bookname.second << "\n";
	}
}

void read(std::multimap<std::string, std::string>& author_booknames) {
	std::string author, bookname;

	while (std::cin >> author >> bookname) {
		author_booknames.insert({ author, bookname });
	}
}

void remove(std::multimap<std::string, std::string>& author_booknames, std::string& author) {
	auto lb = author_booknames.lower_bound(author);
	auto ub = author_booknames.upper_bound(author);

	if (ub == author_booknames.end()) {
		std::cout << "ub is end " << std::endl;
	}
	while (lb != ub) {
		lb = author_booknames.erase(lb);
	}
}


int main() {

	//declare multimap of author to book names
	std::multimap<std::string, std::string> author_booknames;

	read(author_booknames);
	print(author_booknames);

	std::string author = "kitty";
	remove(author_booknames, author);

	std::cout << "\n";
	print(author_booknames);
}
*/