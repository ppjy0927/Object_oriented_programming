// �Լ� �������� ��� ��

#include <iostream>

using namespace std;

void Output(int n) {
	cout << "���� : " << n << endl;
}

int main() {
	// void Output(int n) �� �Լ������� ����
	void(*pf)(int);
	// �Լ��� �̸��� �Լ��� �����ּҿ� ����
	pf = Output;

	Output(200); // �Լ��� ȣ��
	pf(100); // �����͸� �̿��� �Լ� ȣ�� // �Լ� �����͸� �̿��� �Լ��� ����Ű�� ���� ���� ���� 
	(*pf)(10); // �����͸� �̿��� �Լ� ȣ��

	cout << endl;

	cout << Output << endl;
	cout << pf << endl;
	cout << *pf << endl; // *�� �޸� ���� ������
	// �Լ� �����Ϳ����� *pf�� pf�� ���� �ǹ���! --> output�Լ��� �ּ�
}

//���� : 200
//���� : 100
//���� : 10
//
//002B1096
//002B1096
//002B1096