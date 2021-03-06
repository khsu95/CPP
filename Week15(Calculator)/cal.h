#include<iostream>
#include<string>
#include"precedence.h"
#include"stack.h"
using namespace std;

#ifndef CAL_H
#define CAL_H


class Calc {
	precedence token;
	string eq;
	string symbol;
	Stack _Stack;
	precedence get_Token();
public:
	Calc(string eq);
	double calculate();
};

#endif // !CAL_H
