#include"Basememory.h"
#pragma once

class ROM : public BaseMemory {
private:
	int byte;
public:
	ROM(int byte, char* data, int elements);
	virtual char read(int index);
	virtual ~ROM() override;
};
