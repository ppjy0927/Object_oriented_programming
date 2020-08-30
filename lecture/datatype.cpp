#include <iostream>

using namespace std;

/*
	������ Ÿ��(Datatypes)
	: ���� ���� �־ ���� �߿��� ���� �ٷ� ������ Ÿ����. ������ Ÿ���� ������ ������ �� �� ����.

	  ������ Ÿ���� ������ �Ҵ�Ǵ� �޸��� ũ�⸦ �����ϴ� ������ ��.
	  ����Ǵ� �������� ���¿� �����͸� �ؼ��ϴ� ���, �����͸� ó���ϴ� �۾� ������ ������ �� ����.

	  �Ǽ�(float, double), ����(int), ����(char)�� ���� �⺻ Ÿ��(fundamental type)�̶� ��.

	  void Ÿ�� : Ÿ���� ���� Ÿ��
	  -- ������ Ÿ���� ���� ���� �ƴ϶� ������ �� ���� ��쿡 ����ϴ� Ÿ���� ����.
	  -- �ֱ��� ��� C++������ �������� ����� �����ϰ� �ִ� �߼�(�������� �������� ����)

	  void Func(void) �Լ����� --> void Func()

	  unspecified : �Լ��� Ŭ�������� ���ø��� ����� �� ���� Ÿ��
	  �ϳ� �̻��� ������ Ÿ������ �����͸� ��ȯ�ϰų� �� ��쿡 ������ ����� ����� ���� �� ���

	  ���� Ÿ��(Aggregate Types) : �迭, ����ü, Ŭ����, ����ü
	  -- �̷��� ���� Ÿ���� OOP���� ��ü(Object)��� ��.

	  ����
	  - unsigned char : 8��Ʈ(32��Ʈ) 8��Ʈ(64��Ʈ) --> 0~255
	  - signed char : 8 8 --> -128~127
	  - short : 16 16 
	  - unsigned short : 16 16
	  - int : 32 32
	  - unsigned int : 32 32
	  - long : 32 64
	  - unsigned long : 32 64
	  - long long : 64 64

	  �Ǽ�
	  - float : 32 32
	  - double : 64 64
	  - long double : 80 128

	  ��Ÿ 
	  - char : 8 8 --> ASCII �� --> narrow characters
	  - bool(boolean) : 8 8 --> true, false
	  - pointer : 32 64
	  - wchar_t : 16 16~32 --> �����ڵ�(wide character)�� ����
	  - size_t : 32 64 --> ������(�޸�)�� ũ�⸦ ǥ���ϴ� unsigned Ÿ���� ����
	  - ptrdiff_t : 32 64 --> �޸��� �ּҿ� �޸� �ּҿ��� ���� ���̸� ��Ÿ��
*/

void printInt(int x) {
	printf("%d �μ��� %s �Դϴ�.\n", x, (x) ? "��" : "����");
}

// bool Ÿ�� �μ��� ���
void printBool(bool x) {
	cout << x << "�μ��� " << (x ? "��" : "����") << "�Դϴ�." << endl;
	
	// std::boolalpha�� ȭ�� ��� �� 1�� 0�� �ƴ� true�� false�� ���ڷ� ����� ��.
	cout << "bool Ÿ���� �����ʹ� " << boolalpha << x << "�� " << !x << "�� ǥ���� �� �ֽ��ϴ�." << endl;
}

int main() {
	int a;
	float b;
	char c;

	char str[10];
	struct s {
		int a;
		float f[5];
	} ss; // ����ü�� ����ü �迭, Ŭ������ �ϳ� �̻��� �⺻ Ÿ���� ������ �����ϰų�, 
	      // ���ο� �Ǵٸ� ���� Ÿ���� ������ ���� �ִ� ��� ����Ÿ���̶�� ��

	bool ok = true;
	bool notok = false;

	printInt(100);
	printBool(ok);

	cout << notok << ' ' << noboolalpha << notok << endl; // false, 0 ��µ�
	// boolalpha(cout); --> true/false --> boolalpha�� �Լ������� �� ���� ����
	// cout << notok << endl; --> 1/0

	// bool Ÿ���� �����͸� �ֿܼ� ����ϸ� 0, 1�� ��µȴ�.
	// ���� bool Ÿ���� �˾ƺ��� ���� �ϱ� ���ؼ� std::boolalpha:<ios> ����� �̿��� �� �ִ�.
}