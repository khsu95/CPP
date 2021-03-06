#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

template<typename Iter>
void print(Iter begin, Iter end) {
	while (begin != end) {
		std::cout << *begin << " ";
		begin++;
	}
	std::cout << std::endl;
}

bool int_compare(int a, int b) {
	return a > b;
}

int main() {
	std::vector<int> vec;
	vec.push_back(5);
	vec.push_back(3);
	vec.push_back(1);
	vec.push_back(6);
	vec.push_back(4);
	vec.push_back(7);
	vec.push_back(2);
	std::cout << "Before Sorting __" << std::endl;
	print(vec.begin(), vec.end());
	sort(vec.begin(), vec.end(), int_compare);
	std::cout << "After Sorting__" << std::endl;
	print(vec.begin(), vec.end());
}