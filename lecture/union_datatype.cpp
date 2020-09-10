#include <iostream>

/*
	공용체(union data type) : 사용자 정의형 중의 하나로 구조체와 스타일이 흡사

	- 공용체 선언 예
	union 공용체명 {
		형명 식별자;
		형명 식별자;
		....
	}

	- 공용체에는 값을 한 번에 하나만 저장할 수 있음.
	- 공용체의 모든 멤버는 같은 메모리 공간에 자리 잡음.
*/

using namespace std;

union Year {
	int ad; // 서기
	int dangi; // 단기
};

int main() {
	Year myYear; // 공용 구조체 변수
	
	cout << "서기를 입력하시오." << endl;
	cin >> myYear.ad;

	cout << "서기 " << myYear.ad << "년 입니다." << endl;
	cout << "단기 " << myYear.dangi << "년 입니다." << endl; // ad와 dangi가 똑같이 출력됨

	cout << "단기를 입력하시오." << endl;
	cin >> myYear.dangi;
	
	cout << "서기 " << myYear.ad << "년 입니다." << endl;
	cout << "단기 " << myYear.dangi << "년 입니다." << endl;
}