#include <iostream>

using namespace std;

class Person {
private:
	int money;
protected:
	// ��� ������ �ʱ�ȭ�ϴ� ������� �ʱ�ȭ����Ʈ(����ʱ�ȭ����Ʈ, �����ʱ�ȭ)�� ����ϴ� ����� ����.
	// account(1000) <==> account = 1000;
	// Person(int val) : money(val) {}
	
	/*
	�ʱ�ȭ ����Ʈ�� ��� ������ �ʱ�ȭ��Ű�� �� �̿ܿ� �Ʒ��� ���� Ư¡�� ����.
	- �������� ������ ȣ���ϱ� ���� �ʱ�ȭ �۾��� ������.
	- ����� �ݵ�� ��� '�ʱ�ȭ ����Ʈ' ���� ��õǾ�� ������ ������.
	- �ʿ��ϴٸ� Ŭ���� �� �����ϴ� ����Լ��� �ٸ� �����ڸ� ȣ���� �� ����.
	- ��ӹ޴� �⺻ Ŭ������ �����ڳ� �Լ��� ȣ���� �� ����
	
	�ʱ�ȭ ����Ʈ�� ����� ��� Ŭ���� ����� ������ �ʱ�ȭ�ϴ� �۾��� ������ ���� ������ �����ϴ� ���� �ƴ϶�
	�ü���� ��ü�� �����ϴ� ���ÿ� ����� �ʱ�ȭ��. -> c++ �����ڵ��� �ʱ�ȭ ����Ʈ�� ��ȣ
	*/

	//Person(int val) {
	//	money = val;
	//}
	Person(int val) : money(val) {}
public:
	void payTo(Person& payTo, int val) {
		this->money -= val; // this:���� ��ü�� ����Ŵ
		payTo.money += val;
	}
	int getMoney() { return money; }
};

class Student : public Person {
public:
	Student(int val) : Person(val) {} // �ʱ�ȭ ����Ʈ(�⺻Ŭ������ �����ڸ� ȣ���ϴ� ���)
};

class Employee : public Person {
public:
	Employee(int val) : Person(val) {}
};

int main() {
	Student student(1000);
	Employee employee(1000);

	cout << "�л��� �ݾ��� " << student.getMoney() << "�� �Դϴ�." << endl;
	cout << "ȸ����� �ݾ��� " << employee.getMoney() << "�� �Դϴ�." << endl;

	student.payTo(employee, 100);
	cout << "�л��� �ݾ��� " << student.getMoney() << "�� �Դϴ�." << endl;
	cout << "ȸ����� �ݾ��� " << employee.getMoney() << "�� �Դϴ�." << endl;
}

//�л��� �ݾ��� 1000�� �Դϴ�.
//ȸ����� �ݾ��� 1000�� �Դϴ�.
//�л��� �ݾ��� 900�� �Դϴ�.
//ȸ����� �ݾ��� 1100�� �Դϴ�.