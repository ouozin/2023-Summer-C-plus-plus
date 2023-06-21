#include <iostream>
using namespace std;

int main() {
	int a = 9;
	int* pa = &a;
	int** ppa = &pa;

	//ppa = nullptr; // C++11

	//ppa = 0;
	//ppa = NULL;

	//ppa = '\0';
	if (ppa) {
		cout << a << " " << *pa << " " << **ppa << '\n'; // ** ppa기 가리키는 곳의 가리키는 곳의 값
		cout << &a << " " << pa << " " << *ppa << '\n';
	}

	return 0;
}