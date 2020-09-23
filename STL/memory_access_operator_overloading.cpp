#include <iostream>

using namespace std;

class Point {
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	void Print() const {
		cout << x << ", " << y << endl;
	}
};

class PointPtr {
	Point *ptr;
public:
	PointPtr(Point *p) :ptr(p) {}
	~PointPtr() { delete ptr; }
	Point* operator->() const { return ptr; } // 포인터를 넘겨줌
	Point& operator*() const { return *ptr; } // 주소값을 넘겨줌
};

int main() {
	Point* p1 = new Point(1, 2); // 일반 포인터 // p1은 포인트 인스턴스
	PointPtr p2 = new Point(3, 3); // 스마트 포인터


	// 클래스 멤버에 접근하는 연산자를 오버로딩한 것
	p1->Print();
	p2->Print(); // p2.operator->()->Print()와 같음 // 스마트 포인터인데 에러 안 뜨는 이유 : (->)오버로딩 해줬기 때문
	cout << endl;


	// 메모리 접근 연산자를 오버로딩한 것
	(*p1).Print();
	(*p2).Print(); // p2.operator*().Print()와 같음
	// 스마트 포인터인데 에러 안 뜨는 이유 : (*)오버로딩 해줬기 때문 // p2의 주소값을 알 수가 없음 -> 오버로딩 안 해주면 에러

	delete p1; // 일반 포인터는 동적으로 메모리에서 제거되지 않기 때문에 수동으로 제거해야 함
	//delete p2; // p2는 스마트 포인터이기 때문에 동적으로 제거가 되므로 delete할 필요가 없음
}