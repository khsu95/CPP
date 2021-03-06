#pragma once
#include<iostream>
#include<string>
using namespace std;


class Circle {
	string name;
	int radius;
public:
	Circle(int radius = 1, string name = "") {
		this->radius = radius;this->name = name;
	}
	friend istream& operator >>(istream& channel, Circle& obj);
	friend ostream& operator <<(ostream& channel, Circle obj);
};

istream& operator >> (istream& channel, Circle& obj);
ostream& operator <<(ostream& channel, Circle obj);