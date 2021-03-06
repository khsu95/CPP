#include"Rom.h"


ROM::ROM(int byte, char* data, int elements):BaseMemory(byte*1024) {
	this->byte = byte;
	for (int i = 0;i < elements;i++)
		this->men[i] = data[i];
}

char ROM::read(int index) {
	return this->men[index];
}

ROM::~ROM() {
	//delete [] men;
}