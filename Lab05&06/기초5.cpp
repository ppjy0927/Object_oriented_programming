#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int n, m;
	cout << "Enter n for n x m matrix: ";
	cin >> n;
	cout << "Enter m for n x m matrix: ";
	cin >> m;

	n = 1;
	m = 1;

	while (n <= 4) {
		m = 1;
		while (m <= 5) {
			int num;
			num = n * m;
			cout << setw(4) << num;
			m++;
		} 
		cout << endl;
		n++;
	}
	return 0;
}