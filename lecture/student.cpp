#include "students.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Student {
	int stuNumber;
	string name;
	int kor, eng, math;
	float avg;
};

const int MAX_STUDENTS = 50;
Student students[MAX_STUDENTS];

float total_avg = 0.0f;
int num_of_stu = 0; // ������� �Էµ� �л� ��

//�л� ���� �߰� �Լ�, �� �̻� �Է��� �� ���� ��쿡�� false�� ����
bool AddStudent() {
	if (MAX_STUDENTS == num_of_stu)
		return false;

	// ���۷����� Ȱ���� �ڵ带 �����ϰ� ó�� : ���۷����� ���� ������ ���� ����
	Student &std = students[num_of_stu];
	std.stuNumber = num_of_stu + 1;

	// �л��� �̸��� ����, ����, ���� ������ �Է� ����
	cout << "�̸�(���� ����), ����, ����, ���� ������ �Է��ϼ���." << endl;
	cin >> std.name >> std.kor >> std.eng >> std.math;

	// ���� ��� ���� ���
	std.avg = float(std.kor + std.eng + std.math) / 3.0f; // std.avg�� float������ ����ϱ� ���� ������ ���� f�� ����

	// ��ü ��� ���� ���
	const int current = num_of_stu + 1;
	const int prev = num_of_stu;
	total_avg = (total_avg / current) + (std.avg / current);

	// �Է� ���� �л� ���� ������Ŵ
	num_of_stu++;
	return true;
}

// ��ü ���� Ȯ�� �Լ�
void ShowAll() {
	cout.precision(2); // �Ҽ��� ��°�ڸ����� ����ϱ� ���� ����
	cout << fixed;

	cout << endl << "        < ��ü ���� Ȯ��>";
	cout << endl << "�й�  �̸�  ����  ����  ����  ���" << endl;

	for (int i = 0; i < num_of_stu; ++i) {
		const Student& std = students[i];
		cout << setw(4) << std.stuNumber << setw(9) << std.name;
		cout << setw(6) << std.kor << setw(6) << std.eng;
		cout << setw(6) << std.math << setw(10) << std.avg << endl;
	}
	cout << endl << "��ü ��� : " << total_avg << endl;
}