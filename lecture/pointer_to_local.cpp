#include <iostream>

using namespace std;

// 지역변수를 가리키는 포인터를 만들 때
// 지역변수 앞에 static을 붙여주면 값을 사용할 수 있음
int* func() {
	int a = 100;
	int* pa = &a;

	cout << pa << endl;
	cout << "*pa값은 " << *pa << " 입니다." <<  endl;
	return pa;
}

int main() {
	int* rpa = func(); // a의 주소값이었던 주소값이 저장되지만 같은 값을 가지진 않음.
	// 함수가 종료되면서 a의 메모리가 할당해제되어 값이 없어지기 때문(a가 지역 변수이기 때문)

	cout << rpa << endl;
	cout << "리턴 값 *pa는 " << *rpa << " 입니다." << endl;
}
