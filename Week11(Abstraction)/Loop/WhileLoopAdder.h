#pragma once
#include"LoopAdder.h"

class WhileLoopAdder :public LoopAdder {
	int from, to, sum;
	virtual int calculate();
public:
	WhileLoopAdder(string name = "");
};
