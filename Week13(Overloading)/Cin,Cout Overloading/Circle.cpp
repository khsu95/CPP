#include"Circle.h"

istream& operator >> (istream& channel, Circle& obj) {
	cout << "radius >>";
	channel >> obj.radius;
	cout << endl;
	cout << "name >>";
	channel >> obj.name;
	cout << endl;
	return channel;
}

ostream& operator << (ostream& channel, Circle obj) {
	channel << "(������" << obj.radius << "�� " << obj.name << ")";
	return channel;
}