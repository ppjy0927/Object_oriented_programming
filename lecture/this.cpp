#include <iostream>

/*
	this 포인터 : 클래스에서 기본적으로 사용할 수 있는 특별한 포인터
				 객체(인스턴스) 자신을 가리키는 포인터
	
	멤버 함수를 호출하게 되면 멤버 함수에 호출한 인스턴스의 포인터를 같이 보냄. --> 어디서 호출했는지를 알아야 하기 때문
	함수라는 공간이 객체 메모리 공간 안에 포함된 것이 아니라, 따로 메모리 공간을 확보하고 있기 때문에 this라는 인스턴스의 포인터를 같이 보냄.
	인스턴스의 멤버들에 접근하기 위해서는 반드시 이 포인터가 있어야 함.

	인스턴스의 포인터를 보낼 때 매개변수로 보내는 것이지만, 이 매개변수가 생략된 것으로 이해하면 됨. 이 때 생략된 포인터가 this라는 뜻.
*/

using namespace std;

class Demo {
public:
	// 객체(인스턴스) 주소값을 출력하는 멤버함수
	void outPutThis() {
		cout << "이 객체의 주소는 " << this << "입니다." << endl; // this 포인터 : 만들어진 객체의 주소값을 가지고 있음 // 매개변수(인자)로 전달되는 포인터
	} 
};

// 같은 뜻
/*
class Demo {
public:
void outPutThis(Demo* pt) {
	cout << "이 객체의 주소는 " << pt << "입니다." << endl;
	}
};
*/

int main() {
	Demo demo1, demo2;

	cout << "demo1의 주소는 " << &demo1 << "입니다." << endl;
	demo1.outPutThis();

	cout << "demo2의 주소는 " << &demo2 << "입니다." << endl;
	demo2.outPutThis();
}