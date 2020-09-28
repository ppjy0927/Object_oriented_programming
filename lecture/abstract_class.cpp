/*
순수 가상 함수(pure virtual function) : 함수의 동작을 정의하는 본체를 가지고 있지 않음 -> 파생 클래스에서 반드시 재정의해야 하는 멤버 함수.
가상함수 : 반드시 재정의해야만 하는 함수가 아닌, 재정의가 가능한 함수를 가리킴.

문법 : virtual 멤버함수의원형=0;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

추상 클래스(abstract class) : 하나 이상의 순수 가상 함수를 포함하는 클래스
- OOP에서 중요한 특징인 다형성을 가진 함수의 집합을 정의할 수 있게 해줌.
- 반드시 사용되어야 하는 멤버 함수를 추상 클래스에 순수 가상 함수로 선언 -> 파생된 모든 클래스에서는 이 가상 함수를 반드시 재정의해야 함.
- 동작이 정의되지 않은 순수 가상 함수를 포함하고 있으므로, 인스턴스를 생성할 수 없음.

따라서 
1. 먼저 상속을 통해 파생 클래스를 만들고, 
2. 만든 파생 클래스에서 순수 가상 함수를 모두 오버라이딩하고 나서야 
3. 파생 클래스의 인스턴스를 생성할 수 있음.

하지만 추상 클래스 타입의 포인터와 참조는 바로 사용할 수 있음.
*/

#include <iostream>
using namespace std;

class Animal {
public:
	virtual ~Animal() {}  // 가상 소멸자의 선언
	virtual void Cry() = 0; // 순수 가상 함수의 선언
};

class Dog : public Animal {
public:
	virtual void Cry() { cout << "멍멍!!" << endl; }
};

class Cat : public Animal {
public:
	virtual void Cry() { cout << "야옹야옹!!" << endl; }
};

int main(void) {
	Dog my_dog;
	my_dog.Cry();
	Cat my_cat;
	my_cat.Cry();
	return 0;
}

//멍멍!!
//야옹야옹!!