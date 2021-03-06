#include<iostream>
#include<string>
#include"Shape.h"
#include"Eclipse.h"
#include"Line.h"
#include"Rectangle.h"

using namespace std;

int main() {
	Shape* ptr;
	Shape* pStart;
	Shape* pLast;
	ptr = new Eclipse;
	pStart = ptr;
	ptr = new Line(ptr);
	ptr = new Rectangle(ptr);
	pLast = ptr;

	while (1) {
		ptr->set();
		if (ptr == pStart)
			break;
		ptr = ptr->retrunPtr();
	}

	ptr = pLast;

	while (1) {
		cout<<ptr->calculate()<<endl;
		if (ptr == pStart)
			break;
		ptr = ptr->retrunPtr();
	}


}