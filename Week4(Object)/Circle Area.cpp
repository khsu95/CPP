#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	int setRadius(int radius);
	double getArea();
};

int Circle::setRadius(int radius) {
	this->radius = radius;
	return 0;
}

double Circle::getArea() {
	return radius * radius * 3.14;
}

int main() {
	int count;
	cout << "원의 개수>>";
	cin >> count;
	Circle* pArray = new Circle[count];
	for(int i=0;i<count;i++){
		cout << endl;
		int radius;
		cout << "원 "<<i+1<<"의 지름 >>";
		cin >> radius;
		if (radius < 0)	break;
		pArray[i].setRadius(radius);
	}

	int total=0;
	for (int i = 0;i < count;i++) {
		if (pArray[i].getArea() > 100)	total++;
	}
	cout << endl << "면적이 100보다 큰 원은 " << total << "개 입니다" << endl;
}