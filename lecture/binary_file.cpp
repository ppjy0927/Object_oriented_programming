/*
	binary �� text ���� �б�/����
	���� ���� �� ��ȣȭ ������ ���� �� ������

	1) Read �Լ�
	(1) �Լ� �̸� : ifstream
	(2) �ٽ� �ɼ� : ifstream �ٽ� �ɼ� std::ifstream::binary
	(3) �Լ� ���� : explicit basic_ifstream( const char* filename, std::ios_base::openmode mode = ios_base::in );

	2) write �Լ�
	(1) �Լ� �̸� : ofstream
	(2) �ٽ� �ɼ� : std::ios::out | std::ios::binary
	(3) �Լ� ���� : explicit basic_ofstream( const char* filename, std::ios_base::openmode mode = ios_base::out );

	�������� �޸� �Ҵ� �� ���� �б�
	��ȣȭ ������ ���� �� ���� ���� �� �ֱ� ������, buffer�� �Ҵ��� unsigned char�� �ϴ� ���� ����
*/