#pragma once
#include<string>
using namespace std;

class LoopAdder {
	string name;
	int x, y, sum;
	void read();
	void write();
protected:
	LoopAdder(string name = "");
	int getX();
	int getY();
	virtual int calculate() = 0;
public:
	void run();
};