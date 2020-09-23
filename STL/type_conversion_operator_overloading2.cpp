#include <iostream>

using namespace std;

class Point {
	int x;
	int y;
public:
	// explicit 키워드를 사용하는 경우, 생성자를 이용한 형변환을 의도하지 않을 경우 사용함.
	// 즉, 암시적 생성자 호출을 하지 않겠다. (명시적 생성자 호출만 가능하도록 하겠다)
	explicit Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	void Print() const {
		cout << x << ", " << y << endl;
	}
};

int main() {
	Point pt;
	pt.Print(); // 0, 0

	//pt = 10; // pt = Point(10, 0) 암시적 생성자 호출 후에 대입 // explicit 사용 시 에러
	pt = Point(10); // 명시적 생성자 호출(explicit를 사용했기 때문)
 	pt.Print(); // 10, 0

	return 0;
}