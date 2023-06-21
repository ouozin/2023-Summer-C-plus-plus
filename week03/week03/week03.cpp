﻿#include <iostream>
using namespace std;

int main() {
	int a = 1;
	int& ra = a;
	int b = 2;
	//int& ra = b; // Error
	// int& rc = 99; // Error
	const int& rc = 99;
	const int d = 7;
	//int& rd = d; // Error: 초기화시키지 않고 바로 값을 할당함
	const int& rd = d;

	cout << a << " " << ra << '\n';
	cout << rc << '\n';
	cout << d << " " << rd << '\n';

	return 0;
}
