#pragma once
#include"AbstractGate.h"

class ANDGate:public AbstractGate {
public:
	virtual bool operation() override;
};
