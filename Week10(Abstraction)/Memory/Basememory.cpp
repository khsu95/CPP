#include"Basememory.h"

BaseMemory::BaseMemory(int size) {
	men = new char[size];
}

BaseMemory::~BaseMemory() {
	delete[] men;
}