#include <iostream>

using namespace std;

/*
	�����ڵ� wchar_t
	���� : ���ڿ� L�� �ٿ��� ���
	������ : �� ����/�������� ���� ��ȭ(��ȭ����, ����ǥ���)�� �ٸ��� ������ �׿� �°� ��ǻ�� �ý����� �ڵ����� ���ߴ� ��� ����
	
	setlocale(LC_ALL, "korean")�� ���� ��� // LC(Locale Categories)

	LC_CTYPE(����Ÿ�Կ� ���� �������� �ǹ�)
	LC_NUMERIC(���ڿ� ���� �������� �ǹ�)
	LC_TIME(�ð��� ���� �������� �ǹ�)

*/

int main() {
	setlocale(LC_ALL, "korean");

	char en[] = "����";

	wchar_t a[] = L"����"; // �����ڵ�

	for (int i = 0; a[i] != NULL; i++) {
		//�����ڵ��� �ѱ� �ڵ� ����
		if (a[i] < 44032 || a[i] > 55199) { 
			cout << "�ѱ��� �ƴմϴ�!!" << endl;
			break;
		}
	}
	cout << sizeof(en) << endl; // 5���
	wcout << a << endl; // "����" ���, cout ��� wcout ���
	wcout << sizeof(a) << endl; // 6��� -> �����ڵ忡���� ��� 2byte�� ��Ƽ� ����, NULL�� 2byte�� ���� 
}