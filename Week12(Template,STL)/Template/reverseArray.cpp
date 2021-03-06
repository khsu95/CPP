#include"reverseArray.h"


template<class T1>
bool reverseArray(T1 arr[], int n) {
	T1 temp[];
	for (int i = 0;i < n;i++)	
		temp[i] = arr[i];
	int length = n;
	for (int i = 0; i < n;i++) 
		arr[i++] = temp(length--);
	return true;
}