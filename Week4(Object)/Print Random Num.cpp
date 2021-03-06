#include<iostream>
#include<cstdlib>
using namespace std;

class Random {
public:
	Random();
	int next();
	int nextInRange();
};

Random::Random() {
	cout << "Object Created \n";
}

int Random::next(){
	while (1) {
		int num = rand();
		if (num % 2 == 0)	return num;
	}
}

int Random::nextInRange() {
	while (1) {
		int num = rand() % 11;
		if (num % 2 == 0)	return num;
	}
}

int main() {
	Random r;
	cout << "--0에서 " << RAND_MAX << "까지의 랜덤 짝수 정수 10개--" << endl;
	for (int i = 0;i < 10;i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "--2에서" << "10까지의 랜덤 짝수 정수 10개 --" << endl;
	for (int i = 0;i < 10;i++) {
		int n = r.nextInRange();
		cout << n << ' ';
	}
	cout << endl;
	return 0;
}