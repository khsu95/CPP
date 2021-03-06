#include<iostream>
#include<string>
using namespace std;

#include"UI.h"

int UI::menu() {
	cout << "Insert:1, Delete:2, Show:3, Quit:4>> " << endl;
	cin >> select;
	return select;
}

int UI::Insert() {
	cout << "Line:1, Circle:2, Rectangle:3>> " << endl;
	cin >> select;
	return select;
}

int UI::Delete() {
	cout << "Index to be deleted>>" << endl;
	cin >> select;
	return select;
}