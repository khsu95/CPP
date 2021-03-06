#pragma once
#include"LoopAdder.h"

class DoWhileLoopAdder :public LoopAdder {
	int from, to, sum;
	virtual int calculate();
public:
	DoWhileLoopAdder(string name = "");
};

