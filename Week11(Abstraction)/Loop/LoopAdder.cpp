#include<iostream>
#include"LoopAdder.h"

LoopAdder::LoopAdder(string name) {
	this->name = name;
}

void LoopAdder::read() {
	cout << name << ":" << endl;
	cout << "Sum from first number to second number. Put 2 numbers>>";
	cin >> x >> y;
}

void LoopAdder::write() {
	cout << "Sum from " << x << " to " << y << ": " << sum << endl;
}

void LoopAdder::run() {
	read();
	sum = calculate();
	write();
}

int LoopAdder::getX() {
	return x;
}
int LoopAdder::getY() {
	return y;
}