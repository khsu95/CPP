#include"Basememory.h"
#pragma once


class RAM : public BaseMemory {
private:
	int byte;
public:
	RAM(int byte);
	bool write(int index, char element);
	virtual char read(int index);
	virtual ~RAM() override;
};