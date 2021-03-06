#include<iostream>
#include<string>
#include"and.h"
#include"or.h"
#include"Xor.h"

using namespace std;

int main() {
	ANDGate _and;
	OrGate _or ;
	XorGate _xor;

	_and .set(true, false);
	_or .set(true, false);
	_xor .set(true, false);
	cout.setf(ios::boolalpha);
	cout << _and .operation() << endl;
	cout << _or .operation() << endl;
	cout << _xor .operation() << endl;
}