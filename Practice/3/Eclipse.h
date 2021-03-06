#pragma once
#include"Shape.h"

class Eclipse : public Shape {
public:
	virtual double calculate() override;
	Eclipse();
	Eclipse(Shape* ptr);
	virtual ~Eclipse() override;
	virtual bool set() override;
	virtual Shape* retrunPtr();
};