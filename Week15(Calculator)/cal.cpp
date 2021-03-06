#include"cal.h"

Calc::Calc(string eq) {
	this->eq = eq;
	this->eq.append(" \n");
}

precedence Calc::get_Token() {
	symbol = eq.substr(0, eq.find(' '));
	eq = eq.substr((eq.find(' '))+1);
	switch (*(symbol.c_str()))
	{
	case '(': return lparen;
	case ')': return rparen;
	case '+': return ::plus;
	case '-': return ::minus;
	case '*': return times;
	case '/': return divide;
	case '%': return mode;
	case ' ': return eos;
	case '\n': return eos;
	}
	if (48 > * (symbol.c_str()) || *(symbol.c_str()) > 57)
		return eos;
	else	return operand;
}

double Calc::calculate() {
	double op1, op2;
	token = get_Token();
	while (token != eos) {
		if (token == operand)
			_Stack.push(stod(symbol));
		else {
			op2 = _Stack.pop();
			op1 = _Stack.pop();
			switch (token)
			{
			case ::plus: 
				_Stack.push(op1 + op2);
				break;
			case ::minus:
				_Stack.push(op1 - op2);
				break;
			case times:
				_Stack.push(op1 * op2);
				break;
			case divide:
				_Stack.push(op1 / op2);
				break;
			}
		}
		token = get_Token();
	}
	return _Stack._stack[1];
}
