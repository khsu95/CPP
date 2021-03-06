#pragma once
#include"Shape.h"//For Upcasting
#include"UI.h"

class GraphicEditor {
	Shape* pStart;
	Shape* pLast;
	int top;
	bool Insert(int select);
	bool Delete(int select);
	bool Show();
public:
	GraphicEditor();
	bool run();
};