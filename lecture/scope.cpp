#include <iostream>

using namespace std;

// scope(범위)
// 지역범위(local scope 또는 block scope)

// static 지정자(선언 지정자 중의 하나)
// 변수 앞에 붙이면 해당 변수는 정적변수가 됨

int a = 0;
int b = 100;

void func() {
	int a = 0;
	int b = 10;
}

int main() {
	int a = 0;

	int c = 0;
	++c;
	{ // block 안의 변수는 block 밖에서 사용할 수 없음
		int x = 1;
		x = 45;
		int c = 0;
	}
	{
		int x = 100;
	}

	// int c = 100; // 재정의 에러
	cout << c << endl; // block 무시 --> 1 출력

	a++; // main의 a

	::a = 10; // 중복된 변수가 있는 경우, '::'를 이용해 전역 변수 a 표현

	return 0;
}