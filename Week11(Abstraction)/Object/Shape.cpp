#include"Shape.h"

int Shape::getIndex() {
	return index;
}

string Shape::getName() {
	return name;
}

bool Shape::reviseIndex() {
	this->index -= 1;
	return 0;
}