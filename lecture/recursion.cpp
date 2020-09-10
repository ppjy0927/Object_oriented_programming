#include <iostream>

/*
	재귀호출(Recursion) : 함수가 자기 자신을 호출하는 경우를 말함

	** 재귀호출은 언제 호출이 끝나게 할 지를 정해야 함.(그렇지 않으면 무한 반복)
*/

using namespace std;

void RecursiveCall(int n) {
	cout << "n = " << n << endl;

	if (n >= 100)
		return;

	RecursiveCall(n + 1);
}

void Convert2(int num) {
	if (num <= 0)
		return;
	Convert2(num / 2);
	cout << num % 2;
}

int main() {
	//RecursiveCall(0); // n= 0~100까지 출력됨
	
	Convert2(15);
	cout << endl;
}