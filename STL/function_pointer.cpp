// �Լ� ������ : �Լ��� ���� �ּҸ� �����ϴ� ����
//			 : �Լ��� ���� �ּҸ� �����ϴ� ������(�޸� ������ �̸�)

// �Լ��� �̸� : �Լ��� ���� �ּ�

// �Լ��� �����ʹ� �Լ� �ñ״�ó(signature : �Լ��� ��ȯ Ÿ��, �Ű����� ����Ʈ) �� ���� ������.
/* ��> int func(int i, int j)�� �Լ� �����ͷ� �����ϸ�
	----->
	int(*pf)(int, int)
*/

#include <iostream>

using namespace std;

int main() {
	int aa = 100;
	int *paa = &aa;
	
	cout << aa << endl;
	cout << &aa << endl;
	cout << paa << endl;
	cout << *paa << endl;
	return 0;
}

//100
//00D3FA38
//00D3FA38
//100