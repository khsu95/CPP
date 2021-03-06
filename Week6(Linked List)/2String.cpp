#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

class Histogram {
	string sente;
public:
	void put();
	void putc();
	void print();
	Histogram();
};

Histogram::Histogram() {
	cout << "Input your Message>>";
	getline(cin, sente, '\n');
	cout << endl;
}

void Histogram::put() {
	string temp_sent
	cout << "Input your Message to be Added>> ";
	getline(cin, temp_sente, '\n');
	cout << endl;
	sente.append(temp_sente);
}

void Histogram::putc() {
	char word;
	cout << "Input alphabet to be Added>> ";
	cin >> word;
	cin.ignore();
	cout << endl;
	sente.append(&word);
}

void Histogram::print() {
	int size = sente.length();
	transform(sente.begin(), sente.end(), sente.begin(), ::toupper);
	cout << "The number of Alphabet of Sentence :" << sente.length() << endl;
	for (int j = 0;j < 26;j++) {
		int count = 0;
		for (int i = 0;i < sente.length();i++) {
			if (sente[i] == (j + 65)) count++;
		}
		cout << (char)(j + 65) << "(" << count << ")	:";
		for (int i = 0;i < count;i++) {
			cout << "*";
		}
		cout << endl;
	}
}


int main(void) {
	Histogram Histo;
	Histo.put();
	Histo.putc();
	Histo.put();
	Histo.print();
}