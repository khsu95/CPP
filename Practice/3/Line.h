#pragma once
#include"Shape.h"

class Line : public Shape {
public:
	Shape* ptr;
	virtual double calculate() override;
	Line(Shape* ptr);
	virtual ~Line() override;
	virtual bool set() override;
	virtual Shape* retrunPtr();
};