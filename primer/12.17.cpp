#include <iostream>
#include <memory>

int main() {
	int ix = 1024, * pi = &ix, * pi2 = new int(2048); 
	typedef std::unique_ptr<int> intP; 

	//intP p0(ix); //not ok, argument list does not support type of int 

	//intP p1(pi); //not ok, pointer is not dynamically allocated on the heap, unique_ptr can not free the memory

	intP p2(pi2); //ok, after p2 is freed, pi2 becomes a dangling pointer

	//intP p3(&ix); //not ok, pointer is not dynamically allocated on the heap, unique_ptr can not free the memory

	//intP p4(new int(1048)); //ok

	intP p5(p2.get()); //not ok, p2 and p5 would share the same underlying memory. that same memory will be freed twice when unique_ptr is destroyed

}