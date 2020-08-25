#include <iostream>

using namespace std;

void prompt() {
	cout << "Please enter an integer value: ";
}

int main() {
	int value1, value2, sum;
	cout << "This program adds together two integers.\n";
	prompt();
	cin >> value1;
	prompt();
	cin >> value2;
	sum = value1 + value2;
	cout << value1 << " + " << value2 << " = " << sum << '\n';
}