#include <iostream>

using namespace std;

// 함수 프로토타입 선언 : 몸체 없이 함수를 선언해 컴파일러에게 알려주는 것
int max(int x, int y);

void buy(int a = 200);

int main() {
	/*int num1, num2, res;
	
	cout << "첫 번째 정수를 입력하세요." << endl;
	cin >> num1;
	cout << "두 번째 정수를 입력하세요." << endl;
	cin >> num2;

	res = max(num1, num2);

	cout << "최대값은 " << res << "입니다." << endl;*/

	cout << "처음 구매가는 100만원 입니다." << endl;
	buy(100);
	cout << "두 번째 구매가는 기본가입니다." << endl;
	buy();
}

int max(int x, int y) {
	if (x > y) return x;
	else return y;
}

void buy(int a) {
	cout << a << "만원 차량을 구입했습니다." << endl;
}