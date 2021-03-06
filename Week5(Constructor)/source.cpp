#include<iostream>
#include"header.h"
using namespace std;

Circle::Circle(int area) {
	this->area = area;
}

Circle::~Circle() {
	cout << "Circle' Area: " << area << " Object has Destucted" << endl;
}

Rectangle::Rectangle(int area) {
	this->area = area;
}

Rectangle::~Rectangle() {
	cout << "Rectangle' Area: " << area << " Object has Destucted" << endl;
}

Triangle::Triangle(int area) {
	this->area = area;
}

Triangle::~Triangle() {
	cout << "Triangle' Area: " << area << " Object has Destucted" << endl;
}