#include <iostream>

using namespace std;

/*
	유니코드 wchar_t
	사용법 : 문자열 L을 붙여서 사용
	로케일 : 각 국가/지역마다 언어와 문화(통화단위, 숫자표기법)가 다르기 때문에 그에 맞게 컴퓨터 시스템을 자동으로 맞추는 기능 제공
	
	setlocale(LC_ALL, "korean")와 같이 사용 // LC(Locale Categories)

	LC_CTYPE(문자타입에 대한 로케일을 의미)
	LC_NUMERIC(숫자에 대한 로케일을 의미)
	LC_TIME(시간에 대한 로케일을 의미)

*/

int main() {
	setlocale(LC_ALL, "korean");

	char en[] = "하이";

	wchar_t a[] = L"하이"; // 유니코드

	for (int i = 0; a[i] != NULL; i++) {
		//유니코드의 한글 코드 범위
		if (a[i] < 44032 || a[i] > 55199) { 
			cout << "한글이 아닙니다!!" << endl;
			break;
		}
	}
	cout << sizeof(en) << endl; // 5출력
	wcout << a << endl; // "하이" 출력, cout 대신 wcout 사용
	wcout << sizeof(a) << endl; // 6출력 -> 유니코드에서는 모두 2byte로 잡아서 띄어쓰기, NULL도 2byte로 나옴 
}