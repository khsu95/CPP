#include<cmath>
#include<iostream>
#include"Line.h"

double Line::calculate() {
	return sqrt((x1 - x2) ^ 2 + (y1 - y2) ^ 2);
}

Line::Line(Shape* ptr) :Shape(ptr) {
	this->ptr = ptr;
}
Line::~Line() {

}
bool Line::set() {
	std::cout << "Line" << std::endl;
	std::cin >> x1;
	std::cin >> y1;
	std::cin >> x2;
	std::cin >> y2;
	return true;
}

Shape* Line::retrunPtr() {
	return this->ptr;
}