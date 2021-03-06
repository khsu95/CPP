#include<iostream>
#include<string>

using namespace std;

class Smartphone {
private:
	string company;
public:
	void setCompany(string com) {
		this->company = com;
	}
	string getCompany() {
		return company;
	}
};

class Galaxy :virtual public Smartphone {
private:
	string model;
public:
	void setModel(string model) {
		this->model = model;
	}
	string getModel() {
		return model;
	}
};

class Xperia :virtual public Smartphone {
private:
	int price;
public:
	void setprice(int price) {
		this->price = price;
	}
	int getprice() {
		return price;
	}
};

class Android :public Galaxy, public Xperia {
private:
	string version;
public:
	void setVersion(string version) {
		this->version = version;
	}
	string getVersion() {
		return version;
	}
};

int main() {
	Android A;
	A.setModel("Galaxy 10");
	A.setCompany("Samsung");
	A.setprice(600000);
	A.setVersion("Oreo");

	cout << "Model Name: " << A.getModel() << "\tCompany: " << A.getCompany() << "\tAndroid Version: " << A.getVersion();
}