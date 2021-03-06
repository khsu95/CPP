#include<iostream>

using namespace std;

class Calculator {
	int loperand, roperand;
	double result;
public:
	Calculator(int a, int b);
	int cal_plus();
	int cal_minus();
	int cal_mul();
	int cal_div();
	int cal_print();
	~Calculator();
};

Calculator::Calculator(int a, int b) {
	loperand = a;	roperand = b;
}

int Calculator::cal_plus(){
	result= loperand + roperand;
	return 0;
}

int Calculator::cal_minus() {
	result= loperand - roperand;
	return 0;
}

int Calculator::cal_mul() {
	result= loperand * roperand;
	return 0;
}

int Calculator::cal_div() {
	result= (double)loperand / (double)roperand;
	return 0;
}

int Calculator::cal_print() {
	cout << "\n";
	cout << Calculator::result << endl;
	return 0;
}

Calculator::~Calculator() {
	cout << "\n";
}

class Start {
public:
	void run();
};

void Start::run() {
	cout << "계산할 2개의 값을 넣어 주세요 : ";
	int a, b, c;
	cin >> a >> b;
	Calculator calculator(a, b);
	cout << "\n" << "계산 1:더하기 / 2:빼기 / 3:곱하기 / 4:나누기 : ";
	cin >> c;

	switch (c){
	case 1:
		calculator.cal_plus();
		calculator.cal_print();
		break;
	case 2:
		calculator.cal_minus();
		calculator.cal_print();
		break;
	case 3:
		calculator.cal_mul();
		calculator.cal_print();
		break;
	case 4:
		calculator.cal_div();
		calculator.cal_print();
		break;
	default:
		cout << "Error!!!";
		break;
	}
}

int main() {
	Start start;
	while (1) {
		start.run();
	}
}