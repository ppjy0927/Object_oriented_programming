#include <iostream>

/*
	���ڿ��� �迭
	"Hello"�� ���ڿ��� ���ӵ� ���� ��, 'H' 'e' 'l' 'l' 'o' ������ ���ڷ� �̷���� �迭��
	char�� �迭�� �ٷ�� �Ͱ� ����
	
	char str[6];

	str[0] = 'H';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'l';
	str[4] = 'o';
	str[5] = '\0'; // ���ڿ��� ���������� \0(NULL)���� ��

	�ʱ�ȭ ��� : ���� ����� �����ϱ� ������ �� ������� ����

	// ��� ���� ǥ��
	char str[6] = {'H', 'e', 'l', 'l', 'o', '\0'}
	char str[] = {'H', 'e', 'l', 'l', 'o', '\0'}
	char str[6] = "Hello";
	char str[] = "Hello";

*/

using namespace std;

int main() {
	char str[] = "Hello!! World!!";
	cout << str << endl;
}