#include <iostream>

/*
	�Լ��� �����ε� : �μ��� ������ ������ Ÿ���� �ٸ��鼭 �̸��� ���� �Լ��� ���� �� �����ϴ� ������ �����ε�(�ߺ�����)�̶�� ��
					** ���� Ÿ���� �ٸ����� �μ��� Ÿ���̳� ������ �Ȱ����� �����Ϸ��� �ν����� ���ϹǷ� �� ��!
*/

using namespace std;

int max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}

int max(int x, int y, int z) {
	if ((x > y) && (x > z))
		return x;
	else if ((y > x) && (y > z))
		return y;
	else
		return z;
}

double max(double x, double y) {
	if (x > y)
		return x;
	else
		return y;
}

int main() {
	int a, b, c;
	double da, db;

	cout << "���� �ٸ� ���� 3���� �Է��ϼ���. " << endl;
	cin >> a >> b >> c;

	cout << "���� �ٸ� �Ҽ� 2���� �Է��ϼ���. " << endl;
	cin >> da >> db;

	int res1 = max(a, b);
	int res2 = max(a, b, c);
	double res3 = max(da, db);

	cout << "�Է� ���� ���� a, b �� �ִ밪�� " << res1 << "�Դϴ�." << endl;
	cout << "�Է� ���� ���� a, b, c �� �ִ밪�� " << res2 << "�Դϴ�." << endl;
	cout << "�Է� ���� �Ҽ� da, db �� �ִ밪�� " << res3 << "�Դϴ�." << endl;
}