#include<iostream>
#include"statistics.h"

Statistics::Statistics() {
	data = new int[7];
}
bool Statistics::operator!() {
	if (count == 0)	return true;
	else return false;
}

Statistics& Statistics::operator<<(int data) {
	this->data[count++] = data;
	sum += data;
	return *this;
}

bool operator~(Statistics data) {
	for (int i = 0;i < (data.count);i++)	std::cout << data.data[i] << " ";
	std::cout << std::endl;
	return true;
}
int& operator>>(Statistics input, int& avg) {
	avg = input.sum / input.count;
	return avg;
}
