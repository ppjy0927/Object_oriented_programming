#include <iostream>

/*
	Template �̶�� �ܾ�� �����ڶ�� ��(�ؾ Ʋ ���� ��)
	���ø��� Ư¡�� ����� �̹� �����Ǿ� ������, ������ Ÿ���� �����Ǿ� ���� ����

	���ø��� ���� : �Լ� ���ø�, Ŭ���� ���ø�
	
	�Լ� ���ø� : �Լ��� ������� ������ ���ø�(�Լ��� �ƴ϶�� ��)
	���ø� �Լ� : ���ø��� ������� �� �Լ� // ������ �������� �ν��Ͻ�ȭ�� ���� ������� �Լ�

	�Լ� ���ø��� ����
	template <typename T>
*/

//int Sub(int a, int b) {
//	return a - b;
//}

// ���� Sub �Լ��� ���ø�ȭ�ϱ�
//template <typename T>
//T Sub(T a, T b) { // ���⿡�� T�� ���ø� �μ���� ��. (T�� ��ü���� ���� Ÿ�� ��� ����ϴ� �ӽ� Ÿ��)
//	return a - b;
//}

using namespace std;

template <typename T1, typename T2> // �Լ� ���ø��� ����
void ShowData(T1 a, T2 b) {
	cout << a << " ";
	cout << b << endl;
}

template <typename T>
void ShowData1(T a, T b) {
	cout << a << endl;
	cout << b << endl;
}

int main() {
	ShowData(1, 2);
	ShowData(3, 2.5);
	ShowData(3.3, 2.5);
	
	ShowData1(11, 12);
	// ShowData1(2.3, 11); // error, ���� Ÿ�Ը� ���� ��

	return 0;
}