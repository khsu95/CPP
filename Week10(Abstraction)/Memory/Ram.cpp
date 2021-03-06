#include"Ram.h"

RAM::RAM(int byte) : BaseMemory(byte*1024) {
	this->byte = byte;
}

RAM::~RAM() {
	//delete[] men;
}

bool RAM::write(int index, char element) {
	this->men[index] = element;
	return true;
}

char RAM::read(int index) {
	return this->men[index];
}