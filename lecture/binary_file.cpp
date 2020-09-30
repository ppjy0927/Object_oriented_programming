/*
	binary 및 text 파일 읽기/쓰기
	파일 복사 및 암호화 파일을 읽을 때 유용함

	1) Read 함수
	(1) 함수 이름 : ifstream
	(2) 핵심 옵션 : ifstream 핵심 옵션 std::ifstream::binary
	(3) 함수 선언 : explicit basic_ifstream( const char* filename, std::ios_base::openmode mode = ios_base::in );

	2) write 함수
	(1) 함수 이름 : ofstream
	(2) 핵심 옵션 : std::ios::out | std::ios::binary
	(3) 함수 선언 : explicit basic_ofstream( const char* filename, std::ios_base::openmode mode = ios_base::out );

	동적으로 메모리 할당 후 파일 읽기
	암호화 파일을 읽을 때 값이 깨질 수 있기 때문에, buffer의 할당은 unsigned char로 하는 것이 좋음
*/