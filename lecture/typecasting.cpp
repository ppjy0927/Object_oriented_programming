#include <iostream>

using namespace std;

int main() {
	int inum = 170;
	double dnum;
	dnum = (double)inum;

	double dnum2 = 170.5;
	int inum2;
	inum2 = (int)dnum2;

	cout << sizeof(inum) << endl;
	cout << sizeof(dnum) << endl;

	cout << "키는 " << inum << "센티미터입니다. \n";
	cout << "키는 " << dnum << "센티미터입니다. \n";
	
	cout << "키는 " << dnum2 << "센티미터입니다. \n";
	cout << "키는 " << inum2 << "센티미터입니다. \n";

	// 형변환 연산자 : ( 형이름 ) --> 캐스트 연산자
	// 예 ) dnum = (double)inum; // 작은 사이즈 -> 큰 사이즈 변환
	//		inum = (int)dnum; // 큰 사이즈 -> 작은 사이즈 변환

	int d = 2;
	const double pi = 3.14;
	
	cout << "지름이 " << d << "센티미터인 원의 " << endl;
	cout << "둘레는 " << d * pi << "센티미터입니다." << endl;

	int num1 = 5;
	int num2 = 4;

	double result;

	result = (double)num1 / num2; // 둘다 int이면 소수점 버리고 정수(1)로 출력 

	cout << "5 / 4는 " << result << "입니다." << endl;
}