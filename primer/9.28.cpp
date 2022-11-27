#include <iostream>
#include <forward_list>
#include <string> 

//inserts s2 after s1 which is in the forward_list, else insert at the back 
void insertAfter(std::forward_list<std::string>& flst, const std::string& s1, const std::string& s2) {
	auto curr = flst.begin(); 
	auto prev = flst.before_begin(); 

	while(curr != flst.end()) {
		if (*curr == s1) {
			flst.insert_after(curr, s2);
			return; 
		}	
		prev = curr; 
		++curr; 
	}

	flst.insert_after(prev, s2); 
	return; 
}

int main() {
	std::forward_list<std::string> flst = { "meow", "meoww", "meowww" }; 
	
	std::string s1, s2; 
	std::cin >> s1, s2; 
	insertAfter(flst, s1, s2); //doesn't insert and no error 
	insertAfter(flst, "meow", "ele"); //inserts properly 



	//prints flst
	std::cout << "flst: "; 
	for (const auto& i : flst) {
		std::cout << i << ' '; 
	}
	std::cout << std::endl; 

	return 0; 
}