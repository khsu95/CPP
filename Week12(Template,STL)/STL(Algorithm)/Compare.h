#pragma once
#include"Person.h"

bool cmpAge(Person& op1, Person& op2);
bool cmpName(Person& op1, Person& op2);

bool cmpAge(Person& op1,Person& op2) {
	return (op1.getage() >= op2.getage());
}

bool cmpName(Person& op1, Person& op2) {
	return (op1.getname() <= op2.getname());
}
