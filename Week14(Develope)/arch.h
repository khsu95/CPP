
#include<iostream>
#include<string>
using namespace std;


class Stuff {
	string name;
	int price;
	int stock;
	int offStock = 0;
	int offPrice=0;
public:
	void setStuff(string name, int price, int stock);
	string getName();
	int getPrice();
	int getStock();
	int getOffPrice();
	int getOffStock();
	void discountStuff(int percent, int stock);
};

class Shoplist {
	Stuff* p;
	int size;
public:
	string name="Nothing";
	void creatShoplist(string shoplist, int size);
	~Shoplist();
	void createStuff();
	void discount(int percent, int stock,int price_over);
	void display();
};
