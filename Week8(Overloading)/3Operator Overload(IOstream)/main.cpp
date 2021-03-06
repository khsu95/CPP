#include<iostream>
#include<string>


using namespace std;

class Circle {
	string name;
	int radius;
public:
	Circle(int radius = 1, string name = "") {
		this->radius = radius;
		this->name = name;
	}
	friend ostream& operator<<(ostream &channel, Circle input);
	friend istream& operator>>(istream &channel, Circle& input);
};

ostream& operator<<(ostream& channel, Circle input) {
	channel << "Name: " << input.name << "	";
	channel << "Radius: " << input.radius << endl;
	return channel;
}

istream& operator>>(istream& channel, Circle& input) {
	channel >> input.name;
	channel >> input.radius;
	return channel;
}

int main() {
	Circle d, w;
	cin >> d >> w;
	cout << d << w << endl;
	return 0;
}