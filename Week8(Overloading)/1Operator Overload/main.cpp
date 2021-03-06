#include<iostream>
#include<string>

#include"matrix.h"

using namespace std;

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show();b.show();c.show();
	if (a == c)
		cout << "a and c are the same" << endl;
	return 0;
}