#ifndef STACK_H
#define STACK_H
#include"precedence.h"
using namespace std;

class Stack {
	int index = 0;
public:
	precedence stack[MAX_SIZE];
	double _stack[MAX_SIZE];
	Stack();
	void push(int* ptop, precedence token);
	void push(double op);
	precedence pop(int* ptop);
	double pop();
};

#endif