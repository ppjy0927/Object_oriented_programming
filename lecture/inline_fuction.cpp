#include <iostream>

/*
	인라인 함수 : 프로그램 실행 속도를 높이기 위해서 추가된 기능
				일반 함수와 인라인 함수의 가장 큰 차이점은 함수의 호출 방식
				
		일반 함수의 호출 : 프로그램 실행 중 함수를 실행하려면 해당 함수의 주소로 점프를 해야하고, 
						함수의 처리가 종결되면 다시 main함수의 처리 중이던 위치로 되돌아와야 함
						이 때 되돌아올 지점에 대한 위치도 저장되어야 함 -> 시간 소요
		
		인라인 함수의 호출 : 컴파일된 함수 코드가 프로그램의 코드 안에 직접 삽입되는 방식
						  컴파일러가 함수를 호출하는 대신, 그에 대응하는 함수 코드로 대체한다는 뜻
						  함수 호출 없이 코드를 삽입하기 때문에 함수를 수행하기 위해 다른 주소로 점프하거나 되돌아올 필요 x
						  코드가 긴 함수보다 코드가 짧으면서 자주 호출되는 함수는 인라인 함수로 쓰는 것이 좋음

	인라인 함수 정의하기
	
	inline 리턴값타입 함수이름(인수...) { ... }
*/

using namespace std;

void buy(int x, int y) {
	cout << x << "만원, " << y << "만원 차를 구입했습니다." << endl;
}

int buy2(int x, int y) {
	int z;
	cout << x << "만원, " << y << "만원 차를 구입했습니다." << endl;
	z = x + y;
	return z;
}

inline int max(int a, int b) { if (a > b) return a; else return b; }

int main() {
	int inum, inum2, sum;

	cout << "구입하시는 차량의 가격은 얼마입니까?" << endl;
	cin >> inum;
	cout << "구입하시는 차량의 가격은 얼마입니까?" << endl;
	cin >> inum2;

	buy(inum, inum2); // 리턴값이 없는 경우 
	sum = buy2(inum, inum2); // 리턴값이 있는 경우
	
	cout << "당신이 구입한 차량의 총 금액은 " << sum << "만원입니다." << endl;

	int num1, num2, res;
	
	cout << "첫 번째 정수를 입력하세요." << endl;
	cin >> num1;
	cout << "두 번째 정수를 입력하세요." << endl;
	cin >> num2;

	res = max(num1, num2);

	cout << "최대값은 " << res << "입니다." << endl;
}