#pragma once
#include<string>
#include<iostream>

using namespace std;

class Person {
	string name;
	int age;
public:
	Person(string name, int age);
	int getage();
	string getname();
	friend ostream& operator<<(ostream& channel, Person input);
};
