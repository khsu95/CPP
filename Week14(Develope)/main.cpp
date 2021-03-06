#include<iostream>
#include<string>
#include"arch.h"

using namespace std;

int main() {
	Shoplist list[10];
	int index = 0;
	while (1) {
		string name;
		int size;
		int menu = 0;
		int price, percent, stock;
		cout << "Menu 1: Display   2: InputShoplist   3: Discount" << endl;
		cin >> menu;
		switch (menu){
		case 1:
			for (int i = 0;i < index; i++)
				list[i].display();
			break;
		case 2:
			cout << "Name and Size of Shoplist >>";
			cin >> name;
			cin >> size;
			list[index++].creatShoplist(name, size);
			break;
		case 3:
			cout << "Name of Shoplist to be Discount >>";
			cin >> name;
			cout << endl;
			for (int i = 0;i < index;i++) {
				if ((list[i].name) == name) {
					cout << "Price, Percentage and Number >>";
					cin >> price;
					cin >> percent;
					cin >> stock;
					cout << endl;
					list[i].discount(percent, stock, price);
				}
			}
			break;
		default:
			cout << "Unwanted Value" << endl;
			break;
		}
	}
	return 0;
}


