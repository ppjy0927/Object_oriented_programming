#include <iostream>

// 동적 메모리를 활용할 때 왜 전역 변수와 비슷한가?
// ReverStr에서 메모리를 할당했기 때문에 main 안에서 호출되고 종료되는 시점에서도 값이 메모리에 남아있음

using namespace std;

char* ReverseStr(const char* src, int length) {
	// 문자열을 보관하기 위한 메모리를 할당
	char* reverse = new char[length + 1]; // 맨 뒤에 null값이 들어가야 하므로 1을 더해줌

	// 문자열을 역순으로 처리하는 루프
	for (int i = 0; i < length; i++) {
		reverse[i] = src[length - i - 1];
	}

	// 문자열 끝에는 NULL값을 넣어줌
	reverse[length] = NULL; // 할당할 때 +1해줘서 null값이 들어갈 수 있음
 
	return reverse; //일반 지역변수를 이용해 값을 리턴할 수 없음. 
	// 지역변수를 가리키는 포인터를 리턴값으로 사용할 경우,
	// 함수 호출 시, 함수가 종료되면 메모리에서 해제되기 때문에 자동으로 리턴값이 의미없는 값으로 넘어가게 됨 --> static을 이용(함수가 종료되어도 메모리에 계속 남아있음)
}

int main() {
	char original[] = "Good!";
	// 호출된 값을 받아야하니까 포인터형 변수를 선언
	char* resPtr = ReverseStr(original, 5); // 배열을 포인터로 받을 수 있음! 배열이기 때문에 포인터 기능을 가지고 있음

	cout << "원래 문자열은 " << original << "입니다." << endl;
	cout << "거꾸로된 문자열은 " << resPtr << "입니다." << endl;

	delete[] resPtr;

	// 포인터 변수의 메모리를 할당해제하고 나서, 포인터 변수가 사라지는 것은 아니기 때문에 null값을 넣어주면 포인터를 좀 더 안전하게 사용할 수 있음 
	resPtr = NULL;
	cout << (int)resPtr << endl; // 0 출력 --> (int)를 넣으면 주소값을 알 수 있음
}