#include <iostream>

using namespace std;

int factorial(int n) {
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}

int main() {
	cout << " 0! = " << factorial(0) << '\n';
	cout << " 1! = " << factorial(1) << '\n';
	cout << " 6! = " << factorial(6) << '\n';
	cout << "10! = " << factorial(10) << '\n';
}