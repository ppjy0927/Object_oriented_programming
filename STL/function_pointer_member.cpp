// 객체로 멤버함수 호출, 객체의 주소로 멤버 함수 호출
/*
	일반적인 함수포인터		void Print(int n) ---> void(*pf)(int)
	멤버함수 포인터		void Print::Print(int n) ---> void (Print::*pf)(int)

	멤버함수의 호출 방법에 따라 호출 방식에 차이가 있음
	- 객체로 멤버함수를 호출하는 경우에는 .*연산자를 사용함		ex> (객체.*pf)(100)
	- 주소로 멤버함수를 호출하는 경우에는 ->*연산자를 사용함		ex> (주소->*pf)(100)
*/

#include <iostream>

using namespace std;

class Point {
	int x;
	int y;
public:
	Point() {
		x = 0;
		y = 0;
	}
	Point(int intX, int intY) {
		x = intX;
		y = intY;
	}
	
	void Print() const {
		cout << x << ", " << y << endl;
	}
	void PrintInt(int n) {
		cout << "정수 : " << n << endl;
	}
};

int main() {
	Point pt(4, 5);
	Point *p = &pt;

	void (Point::*pf1)() const; // 멤버함수 포인터 선언
	pf1 = &Point::Print; // Point객체의 주소값을 가리켜야 하니까 & 써줌 

	void (Point::*pf2)(int); // 멤버함수 포인터 선언
	pf2 = &Point::PrintInt;

	pt.Print();
	pt.PrintInt(100);
	cout << endl;

	(pt.*pf1)(); // 객체로 멤버함수 포인터를 이용한 호출 방법
	(pt.*pf2)(100); // 객체로 멤버함수 포인터를 이용한 호출 방법
	cout << endl;

	(p->*pf1)(); // 주소로 멤버함수 포인터를 이용한 호출
	(p->*pf2)(100); // 주소로 멤버함수 포인터를 이용한 호출

	return 0;
}

// 일반적인 함수 호출
//4, 5
//정수 : 100
//
// 객체를 이용한 멤버함수 포인터를 사용해 호출
//4, 5
//정수 : 100
//
// 주소로 멤버함수 포인터를 이용한 호출
//4, 5
//정수 : 100
