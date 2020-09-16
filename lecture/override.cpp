#include <iostream>

using namespace std;

/*
	오버라이드 : 부모의 메소드(멤버함수)를 파생(자식) 클래스에서 재정의하는 것
*/

class Person {
public:
	void Method() {
		cout << "Person의 메소드입니다." << endl;
	}
};

class Student : public Person {
public:
	void Method() {
		// Person::Method(); --> Person의 Method 그대로 출력
		cout << "Student의 메소드입니다." << endl;
	}
};

class Professor : public Person {
public:
	void Method() {
		cout << "Professor의 메소드입니다." << endl;
	}
};

int main() {
	Person* person = new Person;
	Student* student = new Student;
	Professor* professor = new Professor;

	person->Method();
	student->Method();
	professor->Method();

	cout << endl;

	// 부모 class로 casting
	((Person*)student)->Method();
	((Person*)professor)->Method();

	cout << endl;

	delete person;
	delete student;
	delete professor;
}

//Person의 메소드입니다.
//Student의 메소드입니다.
//Professor의 메소드입니다.
//
//Person의 메소드입니다.
//Person의 메소드입니다.