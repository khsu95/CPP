#include<iostream>
#include<string>
#include"MyStack.h"
using namespace std;

int main() {
	MyStack mStack(100);
	int n;
	cout << "Put 5 integer to be stack' element" << endl;
	for (int i = 0;i < 5;i++) {
		cin >> n;
		mStack.push(n);
	}
	cout << "Stack' Capacity: " << mStack.capacity() << ", Now Stack' Length: " << mStack.length() << endl;
	cout << "Pop all of element: ";
	while (mStack.length() != 0) {
		cout << mStack.pop() << ' ';
	}
	cout << endl << "Now Stack' Length: " << mStack.length() << endl;
}