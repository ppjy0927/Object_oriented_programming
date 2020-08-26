#include <iostream>

using namespace std;

int main() {
	char key;
	bool done;
	cout << "Input key: ";
	cin >> key;
	switch (key) {
	case 'p':
	case 'P':
		cout << "You choose \"P\"\n";
		break;
	case 'q':
	case 'Q':
		done = true;
		break;
	}
}