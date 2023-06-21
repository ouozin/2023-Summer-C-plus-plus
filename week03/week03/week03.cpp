#include <iostream>
using namespace std;

void test(int ra) { // call by reference
	ra = 7;
	cout << &ra << '\n'; // reference의 주소를 출력함
}

int main() {
	int a = 1;
	cout << &a << '\n'; // reference의 주소를 출력함
	cout << a << '\n';
	test(a);
	cout << a << '\n';

	return 0;
}