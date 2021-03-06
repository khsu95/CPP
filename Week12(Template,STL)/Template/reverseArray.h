#pragma once


template<class T1>
bool reverseArray(T1 arr [], int n) {
	T1 temp[100];
	for (int i = 0;i < n;i++)
		temp[i] = arr[i];
	int length = n-1;
	for (int i = 0; i < n;)
		arr[i++] = temp[length--];
	return true;
}