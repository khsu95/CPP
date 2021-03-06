#include"DoWhileLoopAdder.h"

DoWhileLoopAdder::DoWhileLoopAdder(string name) :LoopAdder(name) {
	sum = 0;
}


int DoWhileLoopAdder::calculate() {

	this->from = getX();
	this->to = getY();

	if (to < from) {
		int temp = to;
		to = from;
		from = temp;
	}

	do {
		sum += from;
		from++;
	} while (from != to);
	return sum;
}