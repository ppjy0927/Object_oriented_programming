#include <iostream>

/*
	단항 연산자 오버로딩
	단항 연산자 : !, &, ~, *, +, -, ++, --
	
	++, -- 와 관련된 컴파일러와 약속된 함수 operator++(), operator++(int)
*/

using namespace std;

class Point {
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	void Print() const { cout << x << ", " << y << endl; }

	const Point& operator++() { // 전위 ++
		++x;
		++y;
		return *this;
	}

	const Point operator++(int) { // 후위 ++
		Point pt(x, y);
		++x;
		++y;
		return pt;
	}
};

int main() {
	Point p1(2, 3), p2(2, 3);
	Point result;

	result = ++p1; // p1.operator++()를 호출한 것과 같음
	p1.Print(); // 3, 4
	result.Print(); // 3, 4

	result = p2++; // p2.operator++(0)를 호츨한 것과 같음
	p2.Print(); // 3, 4
	result.Print(); // 2, 3 --> 연산 전의 결과값

	return 0;
}