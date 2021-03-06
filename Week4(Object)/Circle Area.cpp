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
	cout << "���� ����>>";
	cin >> count;
	Circle* pArray = new Circle[count];
	for(int i=0;i<count;i++){
		cout << endl;
		int radius;
		cout << "�� "<<i+1<<"�� ���� >>";
		cin >> radius;
		if (radius < 0)	break;
		pArray[i].setRadius(radius);
	}

	int total=0;
	for (int i = 0;i < count;i++) {
		if (pArray[i].getArea() > 100)	total++;
	}
	cout << endl << "������ 100���� ū ���� " << total << "�� �Դϴ�" << endl;
}