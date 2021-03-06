#include<iostream>
#include<string>

using namespace std;

class Person {
	int id;
public:
	Person(int id = 0) {
		this->id = id;
	}
	virtual ~Person() {
		cout << "id=" << id << endl;
	}
};

class Student :public Person {
	char* name;
public:
	Student(int id, char* name) :Person(id) {
		int len = strlen(name);
		this->name = new char[len + 1];
		strcpy_s(this->name, len+1, name);
	}
	virtual ~Student() {
		cout << "name=" << name << endl;
		delete[] name;
	}
};

int main() {
	char name[10] = "Son";
	Person* p = new Student(10, name);
	delete p;
}