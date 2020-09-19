/*
	전역 함수를 이용한 연산자 오버로딩

	연산자 오버로딩은 크게 두 가지가 있음

	- 멤버 함수 연산자 오버로딩
	class Point {...};
	
	int main() {
		Point pt1(1, 2), pt2(3, 3);
		pt1 + pt2; // pt1.operator+(pt2)
		return 0;
	}
	//////////////////////////////////////////////////////////////////////////////////////
	- 전역 함수 연산자 오버로딩
	class Point {...};
	
	class Point operator+(argL, argR);

	int main() {
		Point pt1(1, 2);

		operator(k, pt1);
		//k + pt1; // k는 연산자 오버로딩 객체가 아니므로 k.operator+(pt1)처럼 호출이 안 됨
			  	   // 따라서 operator+(k, pt1)처럼 호출해야 함
		return 0;
	}

*/
// 일반적으로 많이 사용하는 연산자 오버로딩은 멤버함수 연산자 오버로딩

#include <iostream>

using namespace std;

class Point {
	int x;
	int y;
public:
	Point() {
		x = 0;
		y = 0;
	}
	Point(int intX, int intY) {
		x = intX;
		y = intY;
	}

	void Print() const {
		cout << x << ", " << y << endl;
	}
	
	int GetX() const { return x; }
	int GetY() const { return y; }

	//const Point operator- (const Point& arg) const {
	//	return Point(x - arg.x, y - arg.y); // this.x 생략되어서 x라고 쓰이는 것
	//} // 멤버 함수를 이용한 연산자 오버로딩

	friend const Point operator-(const Point& argL, const Point& argR);
};

const Point operator-(const Point& argL, const Point& argR) {
	return Point(argL.x - argR.x, argL.y - argR.y);
}

//// 전역 함수를 이용한 연산자 오버로딩
//// x, y는 private해서 접근 불가능하므로 클래스 안에 GetX, GetY 만들어줌 --> friend 키워드를 이용하면 안 만들어도 됨
//const Point operator-(const Point& argL, const Point& argR) {
//	return Point(argL.GetX() - argR.GetX(), argL.GetY() - argR.GetY());
//}

int main() {
	Point p1(2, 3), p2(5, 5);
	Point p3;

	p3 = p1 - p2; // operator-(p1, p2)를 호출
	p3.Print();

	return 0;
}

// 위의 전역 함수에서 getter, setter를 사용하지 않고 x, y에 접근하기 위한 방법으로 friend 키워드를 사용 가능

/*
	프렌드(friend)에는 함수 프렌드와 클래스 프렌드 두 가지가 있음
	함수나 클래스에 프렌드로 지정하면 모든 클래스멤버(public, private, protected)를 접근 제한 없이 사용 가능
	////////////////////////////////////////////////////////////////////////////////////////////
	함수 프렌드 예>
	class A{
		...
		friend void Func(); 
	};
	void Func() { 이 함수 내에서 class A의 모든 멤버를 접근 제한 없이 사용 가능 }
	////////////////////////////////////////////////////////////////////////////////////////////
	클래스 프렌드 예>
	class A{
		...
		friend class B;
	};
	class B { 이 클래스 내에서 class A의 모든 멤버를 접근 제한 없이 사용 가능}
*/