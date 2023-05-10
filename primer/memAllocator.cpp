#include "memAllocator.h"
/*
MemAllocator memAllocator;

void MemAllocator::memoryInUse() {
	std::cout << "memory in use " << memAllocator.memoryAllocated - memAllocator.memoryFreed << " bytes" << std::endl;
}

void* operator new (size_t size) {
	std::cout << "allocating " << size << " byte" << std::endl; 
	memAllocator.memoryAllocated += size; 

	return malloc(size); 
}

void* operator new[](size_t size) {
	std::cout << "allocating size[] " << size << " bytes" << std::endl;
	memAllocator.memoryAllocated += size;

	return malloc(size);
}


void operator delete (void* memory, size_t size) {
	std::cout << "freeing " << size << " byte" << std::endl; 
	memAllocator.memoryFreed += size; 

	free(memory); 
}

void operator delete[](void* memory, size_t size) {
	std::cout << "freeing size[] " << size << "bytes" << std::endl;
	memAllocator.memoryFreed += size;

	free(memory);
}
*/