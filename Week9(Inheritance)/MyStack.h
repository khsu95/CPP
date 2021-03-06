#pragma once
#include"BaseArray.h"
class MyStack:public BaseArray {
public:
	MyStack(int size);
	bool push(int elem);
	int pop();
	int capacity();
	int length();
private:
	int top;
};
