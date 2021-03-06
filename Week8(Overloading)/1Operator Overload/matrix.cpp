#include"matrix.h"
#include<iostream>

Matrix::Matrix(int a, int b, int c, int d) {
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
}

Matrix::Matrix() {
	this->a = 0;
	this->b = 0;
	this->c = 0;
	this->d = 0;
}

Matrix operator+(Matrix op1, Matrix op2) {
	Matrix temp;
	temp.a = op1.a + op2.a;
	temp.b = op1.b + op2.b;
	temp.c = op1.c + op2.c;
	temp.d = op1.d + op2.d;
	return temp;
}

Matrix& operator+=(Matrix& op1, Matrix op2) {
	op1.a += op2.a;
	op1.b += op2.b;
	op1.c += op2.c;
	op1.d += op2.d;
	return op1;
}

bool operator==(Matrix op1, Matrix op2) {
	return (op1.a == op2.a) && (op1.b == op2.b) && (op1.c == op2.c) && (op1.d == op2.d);
}

bool Matrix::show() {
	std::cout << "Matrix = {" << a << " " << b << " " << c << " " << d << " }" << std::endl;
	return std::cout.failbit;
}