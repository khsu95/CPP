#pragma once
#include"AbstractGate.h"

class XorGate :public AbstractGate {
public:
	virtual bool operation() override;
};