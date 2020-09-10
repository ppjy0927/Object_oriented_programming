#include <iostream>

using namespace std;

struct Rectangle {
	int x, y;
	int w, h; // 폭, 높이
};

int main() {
	Rectangle rectangle = {0, 0, 100, 100};
	Rectangle* rptr = &rectangle; // rectangle구조체를 가리킬 수 있는 포인터를 선언, 초기화까지 해줌
	// rptr == rectangle 구조체가 있는 메모리의 주소값

	//점 연산자(.)가 간접참조연산자(*)보다 우선순위가 높기 때문에 rectangle구조체의 멤버에 접근하기 위해서는 꼭 괄호를 써줘야 함
	(*rptr).x = 100;
	rptr->y = 100; // rptr.y와 같음

	cout << "rectangle = ( " << rectangle.x << ", " << rectangle.y << ", ";
	cout << rectangle.w << ", " << rectangle.h << " )" << endl;
}