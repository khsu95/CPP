#pragma once

class BaseArray {
private:
	int capacity;
	int* mem;
protected:
	BaseArray(int capacity = 100);
	~BaseArray();
	void put(int index, int val);
	int get(int index);
	int getCapacity();
};