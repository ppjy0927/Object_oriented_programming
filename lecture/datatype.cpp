#include <iostream>

using namespace std;

/*
	데이터 타입(Datatypes)
	: 변수 선언에 있어서 가장 중요한 것은 바로 데이터 타입임. 데이터 타입이 없으면 컴파일 할 수 없음.

	  데이터 타입은 변수에 할당되는 메모리의 크기를 결정하는 기준이 됨.
	  저장되는 데이터의 형태와 데이터를 해석하는 방법, 데이터를 처리하는 작업 내용을 지정할 수 있음.

	  실수(float, double), 정수(int), 문자(char)를 보통 기본 타입(fundamental type)이라 함.

	  void 타입 : 타입이 없는 타입
	  -- 변수의 타입이 없는 것이 아니라 지정할 수 없는 경우에 사용하는 타입을 말함.
	  -- 최근의 모던 C++에서는 직접적인 사용을 자제하고 있는 추세(안정성이 떨어지기 때문)

	  void Func(void) 함수선언 --> void Func()

	  unspecified : 함수나 클래스에서 템플릿을 사용할 때 쓰는 타입
	  하나 이상의 데이터 타입으로 데이터를 반환하거나 할 경우에 별도로 명시할 방법이 없을 때 사용

	  묶음 타입(Aggregate Types) : 배열, 구조체, 클래스, 공용체
	  -- 이러한 묶음 타입을 OOP에서 객체(Object)라고 함.

	  정수
	  - unsigned char : 8비트(32비트) 8비트(64비트) --> 0~255
	  - signed char : 8 8 --> -128~127
	  - short : 16 16 
	  - unsigned short : 16 16
	  - int : 32 32
	  - unsigned int : 32 32
	  - long : 32 64
	  - unsigned long : 32 64
	  - long long : 64 64

	  실수
	  - float : 32 32
	  - double : 64 64
	  - long double : 80 128

	  기타 
	  - char : 8 8 --> ASCII 값 --> narrow characters
	  - bool(boolean) : 8 8 --> true, false
	  - pointer : 32 64
	  - wchar_t : 16 16~32 --> 유니코드(wide character)를 지원
	  - size_t : 32 64 --> 데이터(메모리)의 크기를 표시하는 unsigned 타입을 지원
	  - ptrdiff_t : 32 64 --> 메모리의 주소와 메모리 주소와의 간격 차이를 나타냄
*/

void printInt(int x) {
	printf("%d 인수는 %s 입니다.\n", x, (x) ? "참" : "거짓");
}

// bool 타입 인수를 사용
void printBool(bool x) {
	cout << x << "인수는 " << (x ? "참" : "거짓") << "입니다." << endl;
	
	// std::boolalpha는 화면 출력 시 1과 0이 아닌 true와 false의 문자로 만들어 줌.
	cout << "bool 타입의 데이터는 " << boolalpha << x << "와 " << !x << "로 표시할 수 있습니다." << endl;
}

int main() {
	int a;
	float b;
	char c;

	char str[10];
	struct s {
		int a;
		float f[5];
	} ss; // 구조체나 공용체 배열, 클래스에 하나 이상의 기본 타입의 변수가 존재하거나, 
	      // 내부에 또다른 묶음 타입의 변수를 갖고 있는 경우 묶음타입이라고 함

	bool ok = true;
	bool notok = false;

	printInt(100);
	printBool(ok);

	cout << notok << ' ' << noboolalpha << notok << endl; // false, 0 출력됨
	// boolalpha(cout); --> true/false --> boolalpha는 함수형으로 쓸 수도 있음
	// cout << notok << endl; --> 1/0

	// bool 타입의 데이터를 콘솔에 출력하면 0, 1로 출력된다.
	// 따라서 bool 타입을 알아보기 쉽게 하기 위해서 std::boolalpha:<ios> 상수를 이용할 수 있다.
}