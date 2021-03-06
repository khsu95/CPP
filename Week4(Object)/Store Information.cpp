#include<iostream>
#include<string>

using namespace std;

class Date {
	string _date_string;
	int year, month, day;
public:
	Date(int _1st, int _2nd, int _3rd);
	Date(string _date);
	int show();
	int getYear();
	int getMonth();
	int getDay();
};

Date::Date(int _1st, int _2nd, int _3rd) {
	year = _1st;
	month = _2nd;
	day = _3rd;
}

Date::Date(string _date) {
	_date_string = _date;
}

int Date::show() {
	cout << stoi(_date_string.substr(0, 4)) << "³â" << stoi(_date_string.substr(5, 1)) << "¿ù" << stoi(_date_string.substr(7, 2)) << "ÀÏ" << endl;
	return 0;
}

int Date::getYear() {
	return year;
}

int Date::getMonth() {
	return month;
}

int Date::getDay() {
	return day;
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << '.' << birth.getMonth() << '.' << birth.getDay() << endl;
	return 0;
}