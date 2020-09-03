#include <iostream>

using namespace std;

// 포인터를 함수의 인수로 사용하는 경우의 예
void swap(int *px, int *py) {
	int temp;

	temp = *px;
	*px = *py;
	*py = temp;
}

int main() {
	int a = 10;
	int b = 100;

	cout << "변수 a의 값은 " << a << " 입니다." << endl;
	cout << "변수 b의 값은 " << b << " 입니다." << endl;
	cout << "변수 a와 b의 값을 교환합니다." << endl;

	swap(a, b);

	cout << "변수 a의 값은 " << a << " 입니다." << endl;
	cout << "변수 b의 값은 " << b << " 입니다." << endl;

	/*
	int *pa;

	pa = &a;

	cout << pa << endl;
	cout << *pa << endl;

	pa = &b;

	cout << pa << endl;
	cout << *pa << endl;

	// 포인터를 이용해 변수 b의 값을 100에서 50으로 바꾸기
	*pa = 50;

	cout << *pa << endl;
	cout << b << endl;
	*/
}