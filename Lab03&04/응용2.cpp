#include <iostream>

using namespace std;

void print_DOB(int year = 1900, int month = 1, int day = 1) {

	cout << "��������� " << year << "�� " << month << "�� " << day << "���Դϴ�." << endl;
}

int main() {
	int year;
	int month;
	int day;

	print_DOB();

	cout << "year �Է�: ";
	cin >> year;
	cout << "month �Է�: ";
	cin >> month;
	cout << "day �Է�: ";
	cin >> day;

	print_DOB(year, month, day);
	return 0;
}