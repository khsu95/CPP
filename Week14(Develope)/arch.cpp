#include<iostream>
#include<string>
#include"arch.h"
using namespace std;

void Stuff::setStuff(string name, int price, int stock){
	this->name = name;
	this->price = price;
	this->stock = stock;
}

void Stuff::discountStuff(int percent, int stock) {
	if (offStock != 1) {
		offPrice = (1 - ((double)percent / 100)) * price;
		offStock = stock;
		cout << "Discount Completed" << endl;
	}
}

string Stuff::getName() {
	return this->name;
}

int Stuff::getPrice() {
	return this->price;
}

int Stuff::getStock() {
	return this->stock;
}

int Stuff::getOffStock() {
	return this->offStock;
}

int Stuff::getOffPrice() {
	return this->offPrice;
}

void Shoplist::creatShoplist(string name, int size) {
	this->p = new Stuff[size];
	this->size = size;
	this->name = name;
	createStuff();
}

Shoplist::~Shoplist() {
	delete[] p;
}

void Shoplist::createStuff() {
	for (int i = 0;i < size;i++) {
		string name_stuff;
		int price;
		int stock;
		cout << "Name, Price, Stock of Stuff " << i + 1 << ">>";
		cin >> name_stuff;
		cin >> price;
		cin >> stock;
		cout << endl;
		
		p[i].setStuff(name_stuff, price, stock);
	}
}

void Shoplist::discount(int percent, int stock, int price_over) {
	for (int i = 0;i < size; i++) {
		if ((p[i].getPrice()) >= price_over) {
			if ((p[i].getStock()) >= stock) {
				p[i].discountStuff(percent,stock);
			}
		}
	}
}

void Shoplist::display() {
	cout << "--------------------------------------------------------------------" << endl;
	cout << name << endl;
	cout << "--------------------------------------------------------------------" << endl;
	cout << "Num     Name     Price     Stock     CutOff_Price     CutOff_Stock" << endl;
	cout << "--------------------------------------------------------------------" << endl;
	for (int i = 0;i < size;i++) {
		cout << i + 1 << ".       " << p[i].getName() << "       " << p[i].getPrice() << "       " << p[i].getStock() << "       " << p[i].getOffPrice() << "       " << p[i].getOffStock() << endl;
	}
	cout << "--------------------------------------------------------------------" << endl;
}