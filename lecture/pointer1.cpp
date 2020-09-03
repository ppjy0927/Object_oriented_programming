#include <iostream>

/*
	주소 : 메모리의 위치를 직접 가리키는 값 (0x1004 ..)
	주소연산자 : &

	포인터 : 주소를 저장하는 특수한 변수
	포인터 선언 시 * 기호를 사용함
	*기호(간접참조연산자)를 포인터명 앞에 사용하면 포인터가 가리키는 변수의 값을 알 수 있음
*/

using namespace std;

int main() {
	int a;
	int* pA; // int형 포인터 pA : int형 변수의 주소를 저장하는 포인터 // int* pA == int *pA
	// int* pA, pB; == int* pA, int pB라는 뜻
	// int *pA, *pB; 이 경우는 둘 다 포인터 변수

	a = 10;
	pA = &a;

	cout << "변수 a의 값은 " << a << " 입니다." << endl;
	cout << "변수 a의 주소는 " << &a << " 입니다." << endl;
	cout << "포인터 pA의 값은 " << pA << "입니다." << endl;
	// *pA == a 
	cout << "*pA의 값은 " << *pA << "입니다." << endl;
}