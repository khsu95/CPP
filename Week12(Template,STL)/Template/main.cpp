#include<iostream>
#include"equalArray.h"
#include"reverseArray.h"

using namespace std;

template<class T>
void print(T arr[], int n) {
	for (int i = 0;i < n;i++)
		cout << arr[i] << '\t';
	cout << endl;
}

int main() {
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 5,4,3,2,1 };
	double arr3[] = { 1.1, 2.2, 3.3, 4.4,5.5 };
	double arr4[] = { 5.5,6.6,7.7,8.8,6.6 };

	cout << "Array 1: ";
	print(arr1, 5);
	cout << "Array 2:";
	print(arr2, 5);
	cout << "Is Array1 equal to Array2?";
	cout << equalArray(arr1, arr2) << endl;
	reverseArray(arr2, 5);
	cout << "Array 2 reversed: ";
	print(arr2, 5);
	cout << "Is Array1 equal to Array2 after revers?";
	cout << equalArray(arr1, arr2) << endl;


	cout << "Array 1: ";
	print(arr3, 5);
	cout << "Array 2:";
	print(arr4, 5);
	cout << "Is Array1 equal to Array2 after revers?";
	cout << equalArray(arr3, arr4) << endl;
	reverseArray(arr3,5);
	cout << "Array 2 reversed: ";
	print(arr3,5);
}