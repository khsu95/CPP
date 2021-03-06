#include<iostream>
#include<cstring>
using namespace std;

class Person {
	char* name;
	int id;
public:
	Person(int id, const char* name);
	Person(Person& p);
	~Person();
	void changeName(const char* name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char* name) {
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1];
	strcpy_s(this->name, strlen(name)+1, name);
}

Person::Person(Person& p) {
	this->id = p.id;
	int len = strlen(p.name);
	this->name = new char[len]+1;
	strcpy_s(this->name, strlen(p.name)+1, p.name);
}

Person::~Person() {
	if (name)
		delete[] name;
}

void Person::changeName(const char* name) {
	if (strlen(name) > strlen(this->name))
		return;
	strcpy_s(this->name, strlen(name), name);
}

int main() {
	Person father(1, "Kitae");
	Person daughter(father);

	cout << "After creating Object daughter ----" << endl;
	father.show();
	daughter.show();

	daughter.changeName("Grace");
	cout << "After Change name of daugter to Grace----" << endl;
	father.show();
	daughter.show();

	return 0;
}