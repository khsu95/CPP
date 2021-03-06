#include"stack.h"
#include<iostream>
#include<string.h>

Stack::Stack() {
	stack[0] = eos;
}

void Stack::push(int* ptop, precedence token)
{
	if (*ptop >= (MAX_SIZE - 1))
		cout<<"Stack is full\n";
	stack[++(*ptop)] = token;
}

void Stack::push(double op) {
	_stack[++(this->index)] = op;
}

precedence Stack::pop(int* ptop)
{
	if (*ptop == -1)
	{
		printf("Stack is empty\n Your input is wrong\n");
		return eos;
	}
	return stack[(*ptop)--];
}

double Stack::pop() {
	return _stack[(this->index)--];
}