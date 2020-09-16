#include <iostream>

using namespace std;

class Person {
private:
	int money;
protected:
	// 멤버 변수를 초기화하는 방법으로 초기화리스트(멤버초기화리스트, 직접초기화)를 사용하는 방법이 있음.
	// account(1000) <==> account = 1000;
	// Person(int val) : money(val) {}
	
	/*
	초기화 리스트는 멤버 변수를 초기화시키는 것 이외에 아래와 같은 특징을 갖음.
	- 생성자의 본문을 호출하기 전에 초기화 작업을 수행함.
	- 상수는 반드시 멤버 '초기화 리스트' 내에 명시되어야 설정이 가능함.
	- 필요하다면 클래스 내 존재하는 멤버함수나 다른 생성자를 호출할 수 있음.
	- 상속받는 기본 클래스의 생성자나 함수를 호출할 수 있음
	
	초기화 리스트를 사용할 경우 클래스 멤버의 변수를 초기화하는 작업을 생성자 본문 내에서 수행하는 것이 아니라
	운영체제가 객체를 생성하는 동시에 멤버를 초기화함. -> c++ 개발자들이 초기화 리스트를 선호
	*/

	//Person(int val) {
	//	money = val;
	//}
	Person(int val) : money(val) {}
public:
	void payTo(Person& payTo, int val) {
		this->money -= val; // this:현재 객체를 가리킴
		payTo.money += val;
	}
	int getMoney() { return money; }
};

class Student : public Person {
public:
	Student(int val) : Person(val) {} // 초기화 리스트(기본클래스의 생성자를 호출하는 방법)
};

class Employee : public Person {
public:
	Employee(int val) : Person(val) {}
};

int main() {
	Student student(1000);
	Employee employee(1000);

	cout << "학생의 금액은 " << student.getMoney() << "원 입니다." << endl;
	cout << "회사원의 금액은 " << employee.getMoney() << "원 입니다." << endl;

	student.payTo(employee, 100);
	cout << "학생의 금액은 " << student.getMoney() << "원 입니다." << endl;
	cout << "회사원의 금액은 " << employee.getMoney() << "원 입니다." << endl;
}

//학생의 금액은 1000원 입니다.
//회사원의 금액은 1000원 입니다.
//학생의 금액은 900원 입니다.
//회사원의 금액은 1100원 입니다.