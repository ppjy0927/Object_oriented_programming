#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c, d, e, result;
	cout << "1번째 정수 입력: ";
	cin >> a;
	cout << "2번째 정수 입력: ";
	cin >> b;
	cout << "3번째 정수 입력: ";
	cin >> c;
	cout << "4번째 정수 입력: ";
	cin >> d;
	cout << "5번째 정수 입력: ";
	cin >> e;

	result = a + b + c + d + e;
	cout << "합계: " << result;
	return 0;
}