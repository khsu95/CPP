#include<iostream>
#include<string>

using namespace std;

int main() {
	int op1, op2;
	while (true) {
		cin.setf(ios_base::oct, ios_base::basefield);
		std::cin >> op1 >> op2;
		cout.setf(ios_base::dec);
		cout.width(20);
		cout.fill('@');
		cout.precision(8);
		std::cout << "Input:: " << op1+op2 << std::endl;
		std::cout << "Input:: " << op1 - op2 << std::endl;
		cout.setf(ios_base::oct);
		cout.width(20);
		cout.fill('*');
		std::cout << "Input:: " << op1 * op2 << std::endl;
		cout.setf(ios_base::dec,ios_base::showpoint);
		cout.width(10);
		cout.fill('/');
		cout.precision(3);
		std::cout << "Input:: " << op1 / op2 << std::endl;
		if (std::cin.fail()) {
			std::cout << "Wrong Input" << std::endl;
			std::cin.clear();
		}
		if (op1 == 0)	break;
	}
}