#include <iostream>
#include <string>

/*
	## user defined type
	- ����ü�� : ����� ������ ���� �ϳ�(�������� ���������� ���α׷��Ӱ� ���� �� �ִ� ����� ������)
	 : �ٸ� ������ �����ִ� ���
	 �� > ������ȣ(int��)�� ������ ��(double��)�� ���� �ٸ� ���� ���� �ϳ��� ��� ���� �⺻���� �Ӽ��� ǥ���� �� �ֵ��� �� ��
	-----------------------------------------------------------------------------------------------------------
	 # ����ü ����
	 ���� >
	 struct ����ü���� {
		���� �ĺ���;
		���� �ĺ���;
		....
	 };

	 �� > ����ڰ� ������ Car��� �̸��� ����ü��
	 struct Car{
		int number; // ���� ��ȣ
		double gas; // ������ ��
	};
	���� Car �ȿ� ����� number, gas�� ��� �Ǵ� ������� �Ǵ� �Ӽ��̶�� ��.
	----------------------------------------------------------------------------------------------------------
	# ����ü���� ���� �����ϱ�(����ü ����) : ����ü�� ������ �����ϸ� �� ������ ����ü�� ��.
	���� > ����ü���� ����ü ������;

	�� > Car car1; // Car ����ü���� car1�̶�� ����ü�� ���Ӱ� ������ ��

	����ü ����� �����ϱ� : ��Ʈ������,��������(.)�� ����
	car1.number; // ����ü������.���

	����ü����� ���� ����
	car1.number = 1000; 
	car1.gas = 20.0;
*/

using namespace std;

struct StudentInfo {
	int stdNumber;
	string bloodType; // AB���� ���� ������ char���� �ƴ� string���� �Ǿ�� ��
	float grade;
};

int main() {
	StudentInfo student1 = {20170001, "A", 3.2f}; // �ʱ�ȭ �������ϴ� ���
	StudentInfo student2 = {20170002, "AB", 3.8f};

	// ������ ��쿡�� �� �ٷε� ǥ�� ����
	//	StudentInfo student1 = { 20170001, "A", 3.2f }, student2 = { 20170002, "AB", 3.8f };

	/*student1.stdNumber = 20170001;
	student1.bloodType = 'A';
	student1.grade = 3.2f;

	student2.stdNumber = 20170002;
	student2.bloodType = 'AB';
	student2.grade = 3.8f;*/

	cout << " --- ù ��° �л��� ���� --- " << endl;
	cout << "�й� : " << student1.stdNumber << endl;
	cout << "������ : " << student1.bloodType << endl;
	cout << "���� : " << student1.grade << endl;

	cout << " --- �� ��° �л��� ���� --- " << endl;
	cout << "�й� : " << student2.stdNumber << endl;
	cout << "������ : " << student2.bloodType << endl;
	cout << "���� : " << student2.grade << endl;

	// ���� �Լ� �������� ����ü�� ���� ����
	struct Point {
		int x;
		int y;
	};

	// ����ü���� �����԰� ���ÿ� ����ü�� �ٷ� ���� ���� ����
	/*
	struct Point {
		int x; 
		int y;
	} p1 = { 30, 20 }, p2;
	*/

	Point p1 = { 30, 20 };
	Point p2;

	p2 = p1; // ����ü ���� ���� ����

	cout << "p1 = ( " << p1.x << ", " << p1.y << " )" << endl;
	cout << "p2 = ( " << p2.x << ", " << p2.y << " )" << endl;
}