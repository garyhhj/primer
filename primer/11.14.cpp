#include <map>
#include <vector>
#include <string>
#include <iostream>


typedef std::string family;
typedef std::string child;
typedef std::string bday; 

void add_family(std::map<family, std::vector<std::pair<child,bday>>>& name_members,
	family& last_name, std::vector<std::pair<child,bday>>& childrens) {

	if (name_members.find(last_name) != name_members.end()) {
		std::cout << "failed to add family, family \"" << last_name << "\" already exists\n";
		return;
	}

	name_members[last_name] = childrens;
	return;
}

void add_children(std::map<family, std::vector<std::pair<child, bday>>>& name_members,
	family& last_name, std::vector<std::pair<child, bday>>& childrens) {

	if (name_members.find(last_name) == name_members.end()) {
		std::cout << "failed to add children, family \"" << last_name << "\" does not exist\n";
	}

	name_members[last_name].reserve(name_members[last_name].size() + childrens.size());
	name_members[last_name].insert(name_members[last_name].end(), childrens.begin(), childrens.end());
	return;
}

void print_map(std::map<family, std::vector<std::pair<child, bday>>>& name_members) {
	for (const auto& i : name_members) {
		//prints last name
		std::cout << i.first << " : \n";

		//prints children
		for (const auto& child : i.second) {
			std::cout << child.first << " " << child.second <<  "\n";
		}
		std::cout << "\n";
	}
}

int main() {
	std::map<family, std::vector<std::pair<child, bday>>> name_members;

	std::string last_name = "meow";
	std::vector<std::pair<child, bday>> children1 = { {"kitty1", "jan1"}, {"kitty2", "jan2"} };
	std::vector<std::pair<child, bday>> children2 = { {"kitty3", "jan3"}, {"kitty4", "jan4"} };
	add_family(name_members, last_name, children1);
	print_map(name_members);

	add_children(name_members, last_name, children2);
	print_map(name_members);
}
