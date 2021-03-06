#pragma once

template <class T1, class T2>
bool equalArray(T1* arr1, T2* arr2) {
	int i = 0;
	while (arr1[i]) {
		if (arr1[i] != arr2[i]) return false;
		if (i==5) return true;
		i++;
	}
	return true;
}