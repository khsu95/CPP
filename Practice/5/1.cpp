#include<iostream>
#include<string>

using namespace std;

int main() {
	char a[100];
	while (true) {
		cin.get(a,100);
		if (cin.eof())	break;
		cout.write(a, 100);
		cin.getline(a, 100, '\n');
		cin.ignore();
		cout.write(a, 100);
	}
	cout << a;

	int b;
	while ((b = cin.get()) != EOF) {
		cout.put(b);
		if (b == '\n')	break;
	}
	cout << b;
}

