#include <iostream>

/*
	배열 : 같은 형의 값들을 묶어서 저장하는 저장소
	배열의 크기 : 각 원소의 크기 * 원소의 개수
*/

using namespace std;

int main() {
	int a[5] = { 10, 20, 30, 40, 50 }; // 배열의 초기화
	int b[] = { 1, 2, 3 };
	int c[3];
	
	char ch;
	double d;

	c[0] = 10;
	c[1] = 100;
	c[2] = 1000;

	cout << a[2] << endl;

	for (int i = 0; i < 5; i++) {
		cout << "a배열의 " << i << "번째 원소 = " << a[i] << endl;
	}

	cout << sizeof(ch) << endl;
	cout << sizeof(d) << endl;

	cout << sizeof(char) << endl; // 1byte
	cout << sizeof(double) << endl; // 8byte
	cout << sizeof(int) << endl; // 4byte

	cout << sizeof(a) << endl; // int형 원소 5개 가지고 있으니 4 * 5 = 20byte
	cout << sizeof(c) << endl; // int형 원소 3개 가지고 있으니 4 * 3 = 12byte
	
	char cArr[3] = { 'a', 'b', 'c' };
	cout << sizeof(cArr) << "bytes" << endl;

	double dArr[5] = { 0.3, 0.5, 1.2, 1.6, 2.6 };
	cout << sizeof(dArr) << "bytes" << endl;

	// sizeof(b) / sizeof(b[0]) --> (ex) 20byte / 4byte = 5 --> 배열의 크기 / 각 요소의 크기 = 요소의 개수 5개 
	for (int i = 0; i < sizeof(b) / sizeof(b[0]); i++) {
		b[i] *= 2;
	}
	cout << b[2] << endl;
}