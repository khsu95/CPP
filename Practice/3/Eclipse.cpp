#include<cmath>
#include<iostream>
#include"Eclipse.h"

double Eclipse::calculate() {
	double line1 = sqrt(x1 ^ 2 + y1 ^ 2);
	double line2 = sqrt(x2 ^ 2 + y2 ^ 2);
	return line1 * line2 * 3.14;
}

Eclipse::Eclipse() :Shape() {

}

Eclipse::Eclipse(Shape* ptr) :Shape(ptr) {
	this->ptr = ptr;
}
Eclipse::~Eclipse() {

}
bool Eclipse::set() {
	std::cout << "Eclipse" << std::endl;
	std::cin >> x1;
	std::cin >> y1;
	std::cin >> x2;
	std::cin >> y2;
	return true;
}

Shape* Eclipse::retrunPtr() {
	return this->ptr;
}