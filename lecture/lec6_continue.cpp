#include <iostream>

using namespace std;

int main() {
	int input, sum = 0;
	cout << "Enter numbers to sum, negative number ends list:";
	while (true) {
		cin >> input;
		if (input < 0)
			continue; //Exit loop immediately
		sum += input;
	}
	cout << "Sum = " << sum << '\n';
}