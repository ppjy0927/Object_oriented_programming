#include <iostream>

using namespace std;

/*
	�������̵� : �θ��� �޼ҵ�(����Լ�)�� �Ļ�(�ڽ�) Ŭ�������� �������ϴ� ��
*/

class Person {
public:
	void Method() {
		cout << "Person�� �޼ҵ��Դϴ�." << endl;
	}
};

class Student : public Person {
public:
	void Method() {
		// Person::Method(); --> Person�� Method �״�� ���
		cout << "Student�� �޼ҵ��Դϴ�." << endl;
	}
};

class Professor : public Person {
public:
	void Method() {
		cout << "Professor�� �޼ҵ��Դϴ�." << endl;
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

	// �θ� class�� casting
	((Person*)student)->Method();
	((Person*)professor)->Method();

	cout << endl;

	delete person;
	delete student;
	delete professor;
}

//Person�� �޼ҵ��Դϴ�.
//Student�� �޼ҵ��Դϴ�.
//Professor�� �޼ҵ��Դϴ�.
//
//Person�� �޼ҵ��Դϴ�.
//Person�� �޼ҵ��Դϴ�.