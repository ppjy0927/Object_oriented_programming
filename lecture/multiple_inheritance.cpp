#include <iostream>

/*
	���� ��� : �ϳ��� Ŭ������ ���� Ŭ������ ���� ����� ����
	�ֱٿ��� ���� ����� ������ �߱�Ǹ鼭 �ֱٿ� �����ϴ� ������ �������� �ʴ� �߼���.
*/

using namespace std;

class Person {
public:
	Person() {
		cout << "Person �Դϴ�." << endl;
	}

	void Speak() {
		cout << "Person speak" << endl;
	}
};

class Student : public Person {
public:
	Student() {
		cout << "Student �Դϴ�." << endl;
	}
	
	void Speak() {
		cout << "Student speak" << endl;
	}
};

class Employee : public Person, Student {
public:
	Employee() {
		cout << "Employee �Դϴ�." << endl;
	}
};

int main() {
	Employee employee;

	//employee.Speak(); --> error �߻� : ���� ����� ��ȣ������ ���� ����
}

/*
	���� ����� ��ȣ��(ambiguity)

	Person�� Speak �޼ҵ带 ������ �ְ�	Student�� Person�� ����ϰ� Person�� Speak �޼ҵ带 �������̵� ��
	Employee�� Person�� Student�� �����

	�� �� Employee�� Speak�޼ҵ带 ȣ���ϸ�, �� �� � �޼ҵ带 ȣ���ؾ� �ϴ��� �����Ϸ��� 
	���α׷����� �ǵ��� �� �� ���� ������ ������ �߻��� -- > ���� ����� �����Ϸ��� �����ϰ� ����, ���α׷��Ӱ� �Ǽ��� ���ɼ��� ����

	���� ���� ����� �� ���� ���� �ʿ�!
*/

//Person �Դϴ�. --> class Person
//Person �Դϴ�. --> class Student(Person ��ӹ޾ұ� ����)
//Student �Դϴ�. --> class Student
//Employee �Դϴ�. --> class Employee