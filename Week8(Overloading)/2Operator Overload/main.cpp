#include<iostream>
#include<string>

#include"statistics.h"

using namespace std;

int main() {
	Statistics stat;
	if (!stat) cout << "There is No statistics data" << endl;

	int x[5];
	cout << "Put in 5 integer" << endl;
	for (int i = 0;i < 5;i++)	cin >> x[i];
	for (int i = 0;i < 5;i++) stat << x[i];
	stat << 100 << 200;
	~stat;

	int avg;
	stat >> avg;
	cout << "avg=" << avg << endl;
}