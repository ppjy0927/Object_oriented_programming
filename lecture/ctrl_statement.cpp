#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	// 학번 변수 만들기
	int stu_no1, stu_no2, stu_no3;
	// 국어 점수를 저장하기 위한 변수
	int stu1_kor, stu2_kor, stu3_kor;
	// 국어 점수를 저장하기 위한 변수
	int stu1_eng, stu2_eng, stu3_eng;
	// 수학 점수를 저장하기 위한 변수
	int stu1_math, stu2_math, stu3_math;
	// 학생 평균을 저장하기 위한 변수
	float stu1_avg, stu2_avg, stu3_avg;
	float total_avg = 0.0f;
	int total_students = 0;

	while (1) {
		// 프로그램 메뉴
		cout << "\n ======== 메뉴 ======== \n";
		cout << "1. 성적 추가" << endl;
		cout << "2. 전체 성적 보기" << endl;
		cout << "Q. 종료하기" << endl;
		cout << "\n ===================== \n" << endl;
		cout << "메뉴의 번호를 입력하세요.. : ";

		char selNum;
		cin >> selNum;

		// 선택한 메뉴를 처리하기 위한 조건문(switch문)
		switch (selNum) {
			// 성적 추가
		case '1':
		{
			if (3 == total_students) {
				cout << endl << "더 이상 성적을 입력할 수 없습니다!!" << endl;
				break;
			}
			else {
				cout << endl << "성적 추가 메뉴가 선택되었습니다." << endl;
			}

			int kor, eng, math;

			cout << "국어, 영어, 수학 점수를 입력하세요 : ";
			cin >> kor >> eng >> math;

			float avg = (kor + eng + math) / 3.0f; // 3 대신 3.0f로 해줘야 결과가 실수가 됨

			// 첫 번째 학생의 성적 입력값 처리
			if (0 == total_students) {
				stu_no1 = total_students + 1;
				stu1_kor = kor;
				stu1_eng = eng;
				stu1_math = math;
				stu1_avg = avg;
				total_avg = stu1_avg;
			}
			// 두 번째 학생의 성적 입력 처리
			else if (1 == total_students) {
				stu_no2 = total_students + 1;
				stu2_kor = kor;
				stu2_eng = eng;
				stu2_math = math;
				stu2_avg = avg;
				total_avg = (stu1_avg + stu2_avg) / 2;
			}
			// 세 번째 학생의 성적 입력 처리
			else {
				stu_no3 = total_students + 1;
				stu3_kor = kor;
				stu3_eng = eng;
				stu3_math = math;
				stu3_avg = avg;
				total_avg = (stu1_avg + stu2_avg + stu3_avg) / 3;
			}
			total_students++;

			// 성적 입력 처리 완료 메세지
			cout << endl << "학생의 성적이 모두 입력 처리되었습니다!!" << endl;

			break;
		}
		case '2':
		{
			// 소수점 표현
			cout.precision(2); // 소수점 2번째 자리까지 표현
			cout << fixed; // 소수점을 고정시켜서 표현, cout.setf(ios::fixed);와 같은 의미

			// 전체 성적 보기
			cout << endl << "-------- 전체 성적 보기 --------" << endl;
			cout << "   학번  국어  영어  수학  평균" << endl;
			for (int i = 0; i < total_students; i++) {
				if (i == 0) 
					cout << setw(7) << stu_no1 << " " << setw(5) << stu1_kor << " " << setw(5) << stu1_eng << " " << setw(5) << stu1_math << " " << setw(5) << stu1_avg << " " << endl;
				else if (i == 1)
					cout << setw(7) << stu_no2 << " " << setw(5) << stu2_kor << " " << setw(5) << stu2_eng << " " << setw(5) << stu2_math << " " << setw(5) << stu2_avg << " " << endl;
				else
					cout << setw(7) << stu_no3 << " " << setw(5) << stu3_kor << " " << setw(5) << stu3_eng << " " << setw(5) << stu3_math << " " << setw(5) << stu3_avg << " " << endl;
			}
			cout << "전체 평균 : " << total_avg << endl;

			break;
		}
		case 'Q':
		case 'q':
			cout << endl << "종료하기 메뉴가 선택되었습니다." << endl;
			return 0;
		default:
			cout << "매뉴를 다시 한 번 확인 해주세요!!" << endl;
			break;
		}
	}
}