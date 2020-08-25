#include <iostream>

using namespace std;

int prompt() {
	int result;
	cout << "Please enter an integer value: ";
	cin >> result;
	return result;
}

int main() {
	int value1, value2, sum;
	cout << "This program add together two integers.\n";
	value1 = prompt();
	value2 = prompt();
	sum = value1 + value2;
	cout << value1 << " + " << value2 << " = " << sum << '\n';
}