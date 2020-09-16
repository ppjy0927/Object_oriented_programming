#include <iostream>

/*
	다중 상속 : 하나의 클래스가 여러 클래스에 대해 상속이 가능
	최근에는 다중 상속의 문제가 야기되면서 최근에 등장하는 언어들은 지원하지 않는 추세임.
*/

using namespace std;

class Person {
public:
	Person() {
		cout << "Person 입니다." << endl;
	}

	void Speak() {
		cout << "Person speak" << endl;
	}
};

class Student : public Person {
public:
	Student() {
		cout << "Student 입니다." << endl;
	}
	
	void Speak() {
		cout << "Student speak" << endl;
	}
};

class Employee : public Person, Student {
public:
	Employee() {
		cout << "Employee 입니다." << endl;
	}
};

int main() {
	Employee employee;

	//employee.Speak(); --> error 발생 : 다중 상속의 모호성으로 인한 에러
}

/*
	다중 상속의 모호성(ambiguity)

	Person은 Speak 메소드를 가지고 있고	Student는 Person을 상속하고 Person의 Speak 메소드를 오버라이딩 함
	Employee는 Person과 Student를 상속함

	이 때 Employee의 Speak메소드를 호출하면, 둘 중 어떤 메소드를 호출해야 하는지 컴파일러는 
	프로그래머의 의도를 알 수 없기 때문에 에러가 발생함 -- > 다중 상속은 컴파일러를 복잡하게 만듬, 프로그래머가 실수할 가능성을 만듬

	따라서 다중 상속을 할 때는 주의 필요!
*/

//Person 입니다. --> class Person
//Person 입니다. --> class Student(Person 상속받았기 때문)
//Student 입니다. --> class Student
//Employee 입니다. --> class Employee