#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int size;
	cout << "Please enter the table size: ";
	cin >> size;

	cout << "      ";
	for (int column = 1; column <= size; column++)
		cout << setw(4) << column;
	cout << '\n';
	cout << "     +";
	for (int column = 1; column <= size; column++)
		cout << "----";
	cout << '\n';
	for (int row = 1; row <= size; row++) {
		cout << setw(4) << row << " |";
		for (int column = 1; column <= size; column++)
			cout << setw(4) << row * column;
		cout << '\n';
	}
}