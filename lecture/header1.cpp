#include <iostream>
#include "header.h";

using namespace std;

int main() {
	Point a = { 0, 0 };
	Point b = { 3, 4 };

	// �� �� ������ �Ÿ��� ���ϴ� �Լ� ȣ��
	double dist_ab = Distance(a, b);

	cout << "(" << a.x << ", " << a.y << ")�� ";
	cout << "(" << b.x << ", " << b.y << ")�� �Ÿ� = " << dist_ab << endl;

}

double Distance(Point p1, Point p2) {
	// ��Ÿ��� ����
	double distance;
	distance = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
	return distance;
}