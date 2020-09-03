#include <iostream>

/*
	레퍼런스(reference) : 변수 등으로 초기화한 식별자, 포인터와 비슷한 기능을 함.

	선언;
	타입& 레퍼런스명 = 변수;

	int a;
	int& rA = a; // rA가 레퍼런스임 : int& rA == int &rA

*/

using namespace std;

void swap(int& x, int& y) {
	int temp;

	temp = x;
	x = y;
	y = temp;
}

int main() {
	int a = 10;
	int b = 200;

	cout << "변수 a 값은 " << a << " 입니다." << endl;
	cout << "변수 b 값은 " << b << " 입니다." << endl;
	cout << "두 변수 a와 b를 교환해보겠습니다." << endl;
	
	swap(a, b);
	cout << "변수 a 값은 " << a << " 입니다." << endl;
	cout << "변수 b 값은 " << b << " 입니다." << endl;


	/*
	int& rA = a;

	cout << "변수 a의 값은 " << a << " 입니다." << endl;
	cout << "레퍼런스 rA의 값은 " << rA << " 입니다." << endl;

	rA = 100;

	cout << "rA의 값은 " << rA << " 입니다." << endl;
	cout << "변수 a의 값은 " << a << " 입니다." << endl;
	*/
}