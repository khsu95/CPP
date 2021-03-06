class Statistics {
	int* data;
	int count = 0;
	int sum = 0;
public:
	Statistics();
	bool operator!();//Exist
	Statistics& operator<<(int data);//Input
	friend bool operator~(Statistics data);//Print
	friend int& operator>>(Statistics input, int& avg);//average
};