// ���� �Լ� ������

#include <iostream>

using namespace std;

// �����Լ�
void Output(int n) {
	cout << "�����Լ� : " << n << endl;
}

// namespace ���� ���� �Լ�
namespace AA {
	void Output(int n) {
		cout << "namespace AA�� �����Լ� : " << n << endl;
	}
}

class Point {
public:
	// static ����Լ�
	static void Output(int n) {
		cout << "Point Ŭ���� ���� ���� ��� �Լ� : " << n << endl;
	}
};

int main() {
	void(*pf)(int); // ���� �Լ��� ������ ���� --> �Լ��� �����ּҰ��� ����Ŵ
	
	Output(100); // namespace�� ���� �����Լ� ȣ��
	AA::Output(100); // namespace AA�� �����Լ� ȣ��
	Point::Output(100); // Point Ŭ������ ���� ����Լ� ȣ��

	pf = Output; // Output(�Լ��̸�)�� �Լ��� �����ּҸ� �ǹ��� == pf�� �����ּҸ� ���� �ִ� ����
	pf(200); // �Լ� �����ͷ� namespace�� ���� �����Լ��� ȣ��

	pf = AA::Output;
	pf(200); // �Լ� �����ͷ� namespace AA�� �����Լ��� ȣ��

	pf = Point::Output;
	pf(200); // �Լ� �����ͷ� PointŬ������ ���� ����Լ��� ȣ��

	return 0;
}

//�����Լ�: 100
//namespace AA�� �����Լ� : 100
//Point Ŭ���� ���� ���� ��� �Լ� : 100
//�����Լ� : 200
//namespace AA�� �����Լ� : 200
//Point Ŭ���� ���� ���� ��� �Լ� : 200