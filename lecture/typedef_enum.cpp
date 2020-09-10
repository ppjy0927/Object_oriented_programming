#include <iostream>

/*
	## type + definition : typedef
	int형, double형과 같은 일반형에 별명을 붙여주는 키워드

	- 변수, 타입 등의 이름을 재정의할 때 사용하는 연산자
	- typedef를 통해서 타입을 재정의해 이식성을 향상시킬 수 있음.
	- 긴 이름으로 참조를 할 경우 이름을 재정의해(별명을 붙여서) 편의성을 높일 수 있음.

	  형태 > typedef 형명 식별자;

	
	## 사용자 정의형(user defined type) : 사용자가 만든 형
	- 열거형 : 프로그래머가 새로운 형을 만들 수 있도록 지원하는 기능
			  enum 키워드를 이용함.
	  
	  형태 > enum 열거형명 {식별자1, 식별자2, 식별자3, ......}
*/

using namespace std;

// 열거형 선언
	enum Week {SUN, MON, TUE, WED, THU, FRI, SAT};

	int main() {
	typedef unsigned int Count;
	Count num = 1;	// unsigned int num = 1;과 같은 의미

	// 열거형 변수 선언
	Week w; // 7개의 식별자 값 중에 하나를 선택해서 사용할 수 있는 데이터형(열거형)이 되는 것
	w = TUE;

	switch (w) {
	case SUN: cout << "일요일 입니다." << endl; break;
	case MON: cout << "월요일 입니다." << endl; break;
	case TUE: cout << "화요일 입니다." << endl; break;
	case WED: cout << "수요일 입니다." << endl; break;
	case THU: cout << "목요일 입니다." << endl; break;
	case FRI: cout << "금요일 입니다." << endl; break;
	case SAT: cout << "토요일 입니다." << endl; break;
	default: cout << "무슨 요일인지 알 수 없습니다." << endl; break;
	}
}