#include <iostream>

/*
	�����Ϳ� [] ������ ����ϱ�
	[] : ÷�ڿ�����(subscript operator)

	�����Ϳ� []�� �迭ó�� ǥ���ϱ�
	int *ptr;
	ptr[2]; // ������ ptr�� ����Ű�� ��ҿ������� �� ĭ ���� ��Ҹ� ����Ŵ

	���� ����� �����Ͱ� �迭�� ����ų ���� ��� ������
*/

using namespace std;

double avg(int *ptr) {
	double sum = 0;
	for (int i = 0; i < 5; i++) {
		//sum += *(ptr + i); ��� ���� �ڵ带 �� �� ����.
		sum += ptr[i];
	}
	return sum / 5;
}

int main() {
	int test[5];
	cout << "5���� ���� ������ �Է��ϼ���." << endl;

	for (int i = 0; i < 5; i++) {
		cin >> test[i];
	}
	double res = avg(test); // �迭�� ������ ������ ������ ����, test == &test[0]
	cout << "5���� ��� ������ " << res << "�Դϴ�." << endl;
}