#include <iostream>

/*
	���ȣ��(Recursion) : �Լ��� �ڱ� �ڽ��� ȣ���ϴ� ��츦 ����

	** ���ȣ���� ���� ȣ���� ������ �� ���� ���ؾ� ��.(�׷��� ������ ���� �ݺ�)
*/

using namespace std;

void RecursiveCall(int n) {
	cout << "n = " << n << endl;

	if (n >= 100)
		return;

	RecursiveCall(n + 1);
}

void Convert2(int num) {
	if (num <= 0)
		return;
	Convert2(num / 2);
	cout << num % 2;
}

int main() {
	//RecursiveCall(0); // n= 0~100���� ��µ�
	
	Convert2(15);
	cout << endl;
}