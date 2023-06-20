#include <iostream>

int main() {
	int number = 0;
	//int count = 0;
	bool isPrime = true; // memory+, readability

	std::cout << "Input number : ";
	std::cin >> number;

	if (number < 2) {
		isPrime = false;
	}
	else {
		for (int i = 2; i < number; i++) {
			if (number % i == 0) {
				//count++; // count = count + 1;
				isPrime = false; // remove add operation
					break; // The loop terminates as soon as divisor is found
			}
			std::cout << i << " ";
		}
	}
	//if (count == 0)
	// (isPrime != 0)
	if (isPrime) // remove comparison operator
		std::cout << number << " is prime number~\n";
	else
		std::cout << number << " is NOT prime number!\n";
	return 0;
}
