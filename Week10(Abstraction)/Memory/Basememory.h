#pragma once
class BaseMemory {
protected:
	char* men;
	BaseMemory(int size);
	virtual ~BaseMemory();
public:
	virtual char read(int index)=0;
};


