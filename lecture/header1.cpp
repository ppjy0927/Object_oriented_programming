#include <iostream>
#include "header.h";

using namespace std;

int main() {
	Point a = { 0, 0 };
	Point b = { 3, 4 };

	// 두 점 사이의 거리를 구하는 함수 호출
	double dist_ab = Distance(a, b);

	cout << "(" << a.x << ", " << a.y << ")와 ";
	cout << "(" << b.x << ", " << b.y << ")의 거리 = " << dist_ab << endl;

}

double Distance(Point p1, Point p2) {
	// 피타고라스 정리
	double distance;
	distance = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
	return distance;
}