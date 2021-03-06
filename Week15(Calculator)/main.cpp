#include<iostream>
#include<string>
#include"postfix.h"
#include"stack.h"
#include"cal.h"

using namespace std;

int main() {
	PostFix _PostFix;
	string equa;
	while (1) {
		cout << "Input Equation:  ";
		cin >> _PostFix.infix;
		cout << endl;
		_PostFix.convert();
		equa.assign(_PostFix.postfix, 1,90);
		Calc _Calc(equa);
		cout << "Output:   " << _Calc.calculate() << endl;
	}
	return 0;
}