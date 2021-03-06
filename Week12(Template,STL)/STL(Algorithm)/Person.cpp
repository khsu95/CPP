#include"Person.h"

Person::Person(string name, int age) {
	this->name = name;
	this->age = age;
}

int Person::getage() {
	return age;
}

string Person::getname() {
	return name;
}


ostream& operator<<(ostream& channel, Person input) {
	channel  << input.getage() << ",  ";
	channel  << input.getname() << endl;
	return channel;
}
