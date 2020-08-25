#include <iostream>

using namespace std;

int main() {
	int x = 5;
	int y = x;
	int& r = x;
	cout << "x = " << x << '\n';
	cout << "y = " << y << '\n';
	cout << "r = " << r << '\n';
	cout << "Assign 7 to x\n";
	x = 7;
	cout << "x = " << x << '\n';
	cout << "y = " << y << '\n';
	cout << "r = " << r << '\n';
	cout << "Assign 8 to y\n";
	y = 8;
	cout << "x = " << x << '\n';
	cout << "y = " << y << '\n';
	cout << "r = " << r << '\n';
	cout << "Assign 2 to r\n";
	r = 2;
	cout << "x = " << x << '\n';
	cout << "y = " << y << '\n';
	cout << "r = " << r << '\n';
}