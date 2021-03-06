#pragma once
#include"Shape.h"

class Rectangle : public Shape {
public:
	virtual double calculate() override;
	Rectangle(Shape* ptr);
	virtual ~Rectangle() override;
	virtual bool set() override;
	virtual Shape* retrunPtr();
};
