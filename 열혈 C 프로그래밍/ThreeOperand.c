#pragma warning(disable: 4996)
#include <stdio.h>

// (if, else if, else) ���� (if, else) ���� ��ø��Ų ���¿� ����.
// �� �� ������ : �ǿ����ڰ� 3���� ���� ������
int main(void) {
	int num, abs;
	printf("���� �Է�: ");
	scanf("%d", &num);

	abs = num > 0 ? num : num * (-1);
	printf("����: %d \n", abs);
	return 0;
}