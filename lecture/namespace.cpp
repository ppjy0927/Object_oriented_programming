#include <iostream>

using namespace std;

int a;
void setValue() {
	a = 10;
}

namespace kia {
	int a;
	void setValue() {
		a = 100;
	}

	namespace daewoo {
		int a;
		void setValue() {
			a = 1000;
		}
	}
}

namespace kd = kia::daewoo;

int main() {
	::setValue();
	kia::setValue();
	kd::setValue();

	cout << ::a << endl;
	cout << kia::a << endl;
	cout << kd::a << endl;
}