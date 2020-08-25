#include <iostream>

using namespace std;

void increment(int x) {
	cout << "Beginning execution of increment, x = " << x << '\n';
	x++;
	cout << "Ending execution of increment, x = " << x << '\n';
}

int main() {
	int x = 5;
	cout << "Before increment, x = " << x << '\n';
	increment(x);
	cout << "After increment, x = " << x << '\n';
}