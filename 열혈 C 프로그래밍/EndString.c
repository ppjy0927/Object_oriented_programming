#include <stdio.h>

// �� ������ �ƽ�Ű �ڵ� ���� 0
// ���� ����(' ')�� �ƽ�Ű �ڵ� ���� 32
// ���ڿ��� ���� �� ���ڷ� �Ǵ�
int main(void) {
	char str[50] = "I like C programming";
	printf("string: %s \n", str);

	str[8] = '\0'; // 9��° ��ҿ� �� ���� ����
	printf("string: %s \n", str);

	str[6] = 0; // 7��° ��ҿ� �� ���� ����, �� ���ڸ� �����ϴ� �Ǵٸ� ���
	printf("string: %s \n", str);

	return 0;
}