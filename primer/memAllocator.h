#pragma once
#include <iostream>

struct MemAllocator {
	unsigned long long memoryAllocated;
	unsigned long long memoryFreed;


	void memoryInUse();
};

void* operator new (size_t size);
void* operator new[](size_t size);

void operator delete (void* memory, size_t size);
void operator delete[](void* memory, size_t size);