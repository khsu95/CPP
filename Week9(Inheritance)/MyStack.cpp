#include"MyStack.h"

MyStack::MyStack(int size) :BaseArray(size){
	top = 1;
	put(0, 0);
}

bool MyStack::push(int elem) {
	if (top == getCapacity())
		return false;
	put(top++, elem);
	return true;
}

int MyStack::pop() {
	if (top == 1)
		return false;
	return get(--top);
}

int MyStack::capacity() {
	return getCapacity();
}

int MyStack::length() {
	return top-1;
}