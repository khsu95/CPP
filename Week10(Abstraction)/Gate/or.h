#pragma once
#include"AbstractGate.h"

class OrGate :public AbstractGate {
public:
	virtual bool operation() override;
};