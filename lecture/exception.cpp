/*
����(exception) : ��ǻ�� �ý����� �����ϴ� ���߿� �������� ���� ������ �߻��Ͽ�, ����ǰ� �ִ� ���α׷��� �����Ǵ� ��
���� ó��(exception handling) : ���� ��Ȳ�� ó���� �� �ֵ��� �ڵ��� �帧�� �ٲٴ� ����

1. try �� : ���ܰ� �߻��� ���ɼ��� �ִ� �ڵ� ���
2. throw �� : try ������ �߻��� ������ ���� ������ ����
3. catch �� : �߻��� ���ܿ� ���� ���� �ڵ鷯�� ó���� ������ ���� �ڵ� ���

try ������ ���ܸ� ó���ϱ� ���ؼ��� try �� ������ �ݵ�� �ϳ� �̻��� catch ���� �����ؾ� ��.
����, �� catch ���� �ڽ��� ó���� �� �ִ� ���� Ÿ���� ������ �� ����.

�̶� Ư�� ���� Ÿ�� ��ſ� ����ǥ(...)�� ����ϸ�, �ش� catch ���� ��� Ÿ���� ���ܸ� ó���ϰ� ��. 
-> �̷��� ����ǥ�� ����� catch ���� ��ġ�� catch �� �� �� �������� ��ġ�ؾ� ��.
*/

#include <iostream>

using namespace std;

int IncreaseNumber(int n) {
	if (n < 0)
		throw n;
	else if (n == 0)
		throw "0�� �Է��� �� �����ϴ�.";
	return ++n;
}

int main(void) {
	int num;

	cout << "���� ������ �ϳ� �Է����ּ��� : ";

	while (cin >> num) {
		try {
			cout << "�Է��� �������� 1�� ������Ų �� : " << IncreaseNumber(num) << endl;
		}
		catch (int input) {
			cout << input << "�� ���� ������ �ƴմϴ�." << endl;
			cout << "���� ������ �ٽ� �Է����ּ��� : ";
			continue;
		}
		catch (const char* st) {
			cout << st << endl;
			cout << "���� ������ �ٽ� �Է����ּ��� : ";
			continue;
		}
		break;
	}
	return 0;
}