#pragma once
#include<iostream>
#include<string>
using namespace std;

class Shape {
public:
	Shape* ptr;
	int getIndex();
	bool reviseIndex();
	string getName();
protected:
	string name;
	int index;
};