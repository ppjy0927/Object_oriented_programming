#include <iostream>

/*
	�����͸� �μ���, �迭�� �μ��� ���
*/

using namespace std;

//�μ��� �迭
/*
double avg(int t[]) {
	double sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += t[i];
	}
	return sum / 5;
}
*/

//�μ��� ������
double avg(int *ptr) {
	double sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += *(ptr + i);
	}
	return sum / 5;
}

int main() {
	// �迭
	/*
	int test[5];
	cout << "5���� ���� ������ �Է��ϼ���." << endl;

	for (int i = 0; i < 5; i++) {
		cin >> test[i];
	}
	double res = avg(test);
	cout << "5���� ��� ������ " << res << "�Դϴ�." << endl;
	*/

	// ������
	int test[5];
	cout << "5���� ���� ������ �Է��ϼ���." << endl;
	
	for (int i = 0; i < 5; i++) {
		cin >> test[i];
	}
	double res = avg(test); // �迭�� ������ ������ ������ ����, test == &test[0]
	cout << "5���� ��� ������ " << res << "�Դϴ�." << endl;
}