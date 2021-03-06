#pragma once
class Shape {
public:
	virtual Shape* retrunPtr() = 0;
	virtual bool set() = 0;
	virtual double calculate() = 0;
protected:
	Shape();
	Shape(Shape* ptr);
	Shape* ptr;
	int x1, x2, y1, y2;
	virtual ~Shape();
};
