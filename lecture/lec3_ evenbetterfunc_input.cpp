#include <iostream>

using namespace std;

int prompt(int n) {
	int result;
	cout << "Please enter integer #" << n << ": ";
	cin >> result;
	return result;
}

int main() {
	int value1, value2, sum;
	cout << "This program add together two integers.\n";
	value1 = prompt(1);
	value2 = prompt(2);
	sum = value1 + value2;
	cout << value1 << " + " << value2 << " = " << sum << '\n';
}