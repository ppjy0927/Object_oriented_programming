#include <iostream>

/*
	함수의 오버로딩 : 인수의 개수나 데이터 타입이 다르면서 이름만 같은 함수를 여러 개 정의하는 행위를 오버로딩(중복정의)이라고 함
					** 리턴 타입이 다르더라도 인수의 타입이나 개수가 똑같으면 컴파일러가 인식하지 못하므로 안 됨!
*/

using namespace std;

int max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}

int max(int x, int y, int z) {
	if ((x > y) && (x > z))
		return x;
	else if ((y > x) && (y > z))
		return y;
	else
		return z;
}

double max(double x, double y) {
	if (x > y)
		return x;
	else
		return y;
}

int main() {
	int a, b, c;
	double da, db;

	cout << "서로 다른 정수 3개를 입력하세요. " << endl;
	cin >> a >> b >> c;

	cout << "서로 다른 소수 2개를 입력하세요. " << endl;
	cin >> da >> db;

	int res1 = max(a, b);
	int res2 = max(a, b, c);
	double res3 = max(da, db);

	cout << "입력 받은 정수 a, b 중 최대값은 " << res1 << "입니다." << endl;
	cout << "입력 받은 정수 a, b, c 중 최대값은 " << res2 << "입니다." << endl;
	cout << "입력 받은 소수 da, db 중 최대값은 " << res3 << "입니다." << endl;
}