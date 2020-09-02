#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	// �й� ���� �����
	int stu_no1, stu_no2, stu_no3;
	// ���� ������ �����ϱ� ���� ����
	int stu1_kor, stu2_kor, stu3_kor;
	// ���� ������ �����ϱ� ���� ����
	int stu1_eng, stu2_eng, stu3_eng;
	// ���� ������ �����ϱ� ���� ����
	int stu1_math, stu2_math, stu3_math;
	// �л� ����� �����ϱ� ���� ����
	float stu1_avg, stu2_avg, stu3_avg;
	float total_avg = 0.0f;
	int total_students = 0;

	while (1) {
		// ���α׷� �޴�
		cout << "\n ======== �޴� ======== \n";
		cout << "1. ���� �߰�" << endl;
		cout << "2. ��ü ���� ����" << endl;
		cout << "Q. �����ϱ�" << endl;
		cout << "\n ===================== \n" << endl;
		cout << "�޴��� ��ȣ�� �Է��ϼ���.. : ";

		char selNum;
		cin >> selNum;

		// ������ �޴��� ó���ϱ� ���� ���ǹ�(switch��)
		switch (selNum) {
			// ���� �߰�
		case '1':
		{
			if (3 == total_students) {
				cout << endl << "�� �̻� ������ �Է��� �� �����ϴ�!!" << endl;
				break;
			}
			else {
				cout << endl << "���� �߰� �޴��� ���õǾ����ϴ�." << endl;
			}

			int kor, eng, math;

			cout << "����, ����, ���� ������ �Է��ϼ��� : ";
			cin >> kor >> eng >> math;

			float avg = (kor + eng + math) / 3.0f; // 3 ��� 3.0f�� ����� ����� �Ǽ��� ��

			// ù ��° �л��� ���� �Է°� ó��
			if (0 == total_students) {
				stu_no1 = total_students + 1;
				stu1_kor = kor;
				stu1_eng = eng;
				stu1_math = math;
				stu1_avg = avg;
				total_avg = stu1_avg;
			}
			// �� ��° �л��� ���� �Է� ó��
			else if (1 == total_students) {
				stu_no2 = total_students + 1;
				stu2_kor = kor;
				stu2_eng = eng;
				stu2_math = math;
				stu2_avg = avg;
				total_avg = (stu1_avg + stu2_avg) / 2;
			}
			// �� ��° �л��� ���� �Է� ó��
			else {
				stu_no3 = total_students + 1;
				stu3_kor = kor;
				stu3_eng = eng;
				stu3_math = math;
				stu3_avg = avg;
				total_avg = (stu1_avg + stu2_avg + stu3_avg) / 3;
			}
			total_students++;

			// ���� �Է� ó�� �Ϸ� �޼���
			cout << endl << "�л��� ������ ��� �Է� ó���Ǿ����ϴ�!!" << endl;

			break;
		}
		case '2':
		{
			// �Ҽ��� ǥ��
			cout.precision(2); // �Ҽ��� 2��° �ڸ����� ǥ��
			cout << fixed; // �Ҽ����� �������Ѽ� ǥ��, cout.setf(ios::fixed);�� ���� �ǹ�

			// ��ü ���� ����
			cout << endl << "-------- ��ü ���� ���� --------" << endl;
			cout << "   �й�  ����  ����  ����  ���" << endl;
			for (int i = 0; i < total_students; i++) {
				if (i == 0) 
					cout << setw(7) << stu_no1 << " " << setw(5) << stu1_kor << " " << setw(5) << stu1_eng << " " << setw(5) << stu1_math << " " << setw(5) << stu1_avg << " " << endl;
				else if (i == 1)
					cout << setw(7) << stu_no2 << " " << setw(5) << stu2_kor << " " << setw(5) << stu2_eng << " " << setw(5) << stu2_math << " " << setw(5) << stu2_avg << " " << endl;
				else
					cout << setw(7) << stu_no3 << " " << setw(5) << stu3_kor << " " << setw(5) << stu3_eng << " " << setw(5) << stu3_math << " " << setw(5) << stu3_avg << " " << endl;
			}
			cout << "��ü ��� : " << total_avg << endl;

			break;
		}
		case 'Q':
		case 'q':
			cout << endl << "�����ϱ� �޴��� ���õǾ����ϴ�." << endl;
			return 0;
		default:
			cout << "�Ŵ��� �ٽ� �� �� Ȯ�� ���ּ���!!" << endl;
			break;
		}
	}
}