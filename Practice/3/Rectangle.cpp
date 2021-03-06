#include<cmath>
#include<iostream>
#include"Rectangle.h"

double Rectangle::calculate() {
	double line1 = sqrt(x1 ^ 2 + y1 ^ 2);
	double line2 = sqrt(x2 ^ 2 + y2 ^ 2);
	return line1 * line2;
}

Rectangle::Rectangle(Shape* ptr) : Shape(ptr) {
	this->ptr = ptr;
}
Rectangle::~Rectangle() {

}
bool Rectangle::set() {
	std::cout << "Rectangle" << std::endl;
	std::cin >> x1;
	std::cin >> y1;
	std::cin >> x2;
	std::cin >> y2;
	return true;
}

Shape* Rectangle::retrunPtr() {
	return this->ptr;
}