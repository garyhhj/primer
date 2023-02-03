#include <iostream>
#include <memory>

struct destination {
	int id;
	destination(int i) : id(i) {}
};

struct connection {
	destination* des;
};

connection connect(destination* d) {
	connection a; 
	a.des = d;
	return a; 
}

void disconnect(connection* p) {
	std::cout << "disconnection connection: " << p->des->id << "\n"; 
}

void f(destination& d) {
	//get a connection;
	connection a = connect(&d); 
	std::shared_ptr<connection> con(&a, disconnect); 
	//uses connection

	//somehow disconnects 
}

int main() {
	//setting up destination
	destination d(2); 
	f(d); 

	return 0; 
}