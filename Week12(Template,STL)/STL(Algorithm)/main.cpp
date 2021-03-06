#include<vector>
#include<algorithm>
#include<iostream>
#include<string>
#include"Person.h"
#include"Compare.h"

using namespace std;

int main() {
	vector<Person> v;
	v.push_back(Person("John", 33));
	v.push_back(Person("Kevin", 40));
	v.push_back(Person("Snow", 20));
	v.push_back(Person("Daniel", 15));

	sort(v.begin(), v.end(), cmpAge);
	cout << "Sort Age in Descending Order " << endl;
	for_each(v.begin(), v.end(), [](Person n) {cout << n;});
	cout << endl;

	sort(v.begin(), v.end(), cmpName);
	cout << "Sort Name in Ascending Order " << endl;
	for_each(v.begin(), v.end(), [](Person n) {cout << n;});
}

