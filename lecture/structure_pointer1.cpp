#include <iostream>

using namespace std;

struct Rectangle {
	int x, y;
	int w, h; // ��, ����
};

int main() {
	Rectangle rectangle = {0, 0, 100, 100};
	Rectangle* rptr = &rectangle; // rectangle����ü�� ����ų �� �ִ� �����͸� ����, �ʱ�ȭ���� ����
	// rptr == rectangle ����ü�� �ִ� �޸��� �ּҰ�

	//�� ������(.)�� ��������������(*)���� �켱������ ���� ������ rectangle����ü�� ����� �����ϱ� ���ؼ��� �� ��ȣ�� ����� ��
	(*rptr).x = 100;
	rptr->y = 100; // rptr.y�� ����

	cout << "rectangle = ( " << rectangle.x << ", " << rectangle.y << ", ";
	cout << rectangle.w << ", " << rectangle.h << " )" << endl;
}