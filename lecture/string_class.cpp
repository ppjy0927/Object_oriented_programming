#include <iostream>
#include <string>

using namespace std;

int main() {
	string str = "Hello World!!";
	string str2 = "124541";

	cout << str << endl;
	cout << str[2] << endl; // �迭ó�� ��밡��

	// ���ڿ��� ����
	cout << str2.size() << endl;

	// ���ڿ��� ����
	string strs = str + str2;
	cout << strs << endl;

	// find �Լ� : ���ڿ����� Ư�� ���ڿ��� ã�� ���� ��� �� ��ġ���� ����
	cout << str.find("World") << endl;
}