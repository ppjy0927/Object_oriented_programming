#include <iostream>

/*
	Template 이라는 단어는 모형자라는 뜻(붕어빵 틀 같은 것)
	템플릿의 특징은 기능은 이미 결정되어 있지만, 데이터 타입은 결정되어 있지 않음

	템플릿의 종류 : 함수 템플릿, 클래스 템플릿
	
	함수 템플릿 : 함수를 기반으로 구현된 템플릿(함수가 아니라는 뜻)
	템플릿 함수 : 템플릿을 기반으로 한 함수 // 컴파일 과정에서 인스턴스화를 거쳐 만들어진 함수

	함수 템플릿의 정의
	template <typename T>
*/

//int Sub(int a, int b) {
//	return a - b;
//}

// 위의 Sub 함수를 템플릿화하기
//template <typename T>
//T Sub(T a, T b) { // 여기에서 T를 템플릿 인수라고 함. (T는 구체적인 실제 타입 대신 사용하는 임시 타입)
//	return a - b;
//}

using namespace std;

template <typename T1, typename T2> // 함수 템플릿의 정의
void ShowData(T1 a, T2 b) {
	cout << a << " ";
	cout << b << endl;
}

template <typename T>
void ShowData1(T a, T b) {
	cout << a << endl;
	cout << b << endl;
}

int main() {
	ShowData(1, 2);
	ShowData(3, 2.5);
	ShowData(3.3, 2.5);
	
	ShowData1(11, 12);
	// ShowData1(2.3, 11); // error, 같은 타입만 들어가야 함

	return 0;
}