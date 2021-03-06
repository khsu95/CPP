#include<iostream>
#include<string>

using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius);
	double getArea();
	string getName();
};

void Circle::setCircle(string name, int radius) {
	this->name = name;
	this->radius = radius;
}

string Circle::getName() {
	return name;
}

double Circle::getArea() {
	return radius * radius*3.14;
}

class CircleManager {
	Circle* p;
	int size;
public:
	CircleManager(int size);
	~CircleManager();
	void searchByName();
	void searchByArea();
};

CircleManager::CircleManager(int size) {
	this->p = new Circle[size];
	this->size = size;
	
	for (int i = 0;i < size;i++) {
		string name;
		int radius;
		cout << "Name and Radius of " << "Circle " << i+1 << ">>";
		cin >> name;
		cin >> radius;
		cout << endl;

		p[i].setCircle(name, radius);
	}
}

CircleManager::~CircleManager() {
	delete[] p;
}

void CircleManager::searchByName() {
	string searchfor;
	cout << "Name of Circle for which you want to Search >>";
	cin >> searchfor;
	
	for (int i = 0;i < size;i++) {
		string name = p[i].getName();
		if (name.find(searchfor) != string::npos)	cout << "Area of Circle " << p[i].getName() << " is " << p[i].getArea() << endl;
	}
}

void CircleManager::searchByArea() {
	double searchfor;
	cout << "Input the Minimum Area of Circle >>";
	cin >> searchfor;
	for (int i = 0;i < size;i++) {
		double area = p[i].getArea();
		if (area >= searchfor) {
			cout << "Area of Circle " << p[i].getName() << " is " << area << endl;
		}
	}
}

int main(void) {
	int num_circle;
	cout << "The number of Circle>>";
	cin >> num_circle;
	cout << endl;

	CircleManager circleArray(num_circle);

	circleArray.searchByArea();
	circleArray.searchByName();

	return 0;
}