#include"WhileLoopAdder.h"


WhileLoopAdder::WhileLoopAdder(string name):LoopAdder(name) {
	sum = 0;
}


int WhileLoopAdder::calculate() {

	this->from = getX();
	this->to = getY();

	if (to < from) {
		int temp = to;
		to = from;
		from = temp;
	}

	while (from != to) {
		sum += from;
		from++;
	}
	return sum;
}