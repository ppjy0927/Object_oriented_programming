#pragma once
/*
	#ifndef 헤더명_H ~ #endif : 헤더파일이 겹치는 것을 막기 위한 일종의 매크로
	(#ifndef ~ #endif(정의가 안 되어있는지 확인)의 반대구문 #ifdef ~ #endif(정의가 되어있는지 확인))

	cpp파일에서 #include "menu.h"를 2번 이상 했을 때, 2번째부턴s ifndef문 다음에 바로 endif문으로 빠져나오게 됨(중간 실행x)
*/

/*
#ifndef MENU_H
#define MENU_H

struct Menu {
	int x, y;
};

#endif
*/

#ifndef MENU_H
#define MENU_H

// 메뉴의 종류
enum MENU{MENU_ADD_STUDENT, MENU_SHOW_ALL, MENU_QUIT};

MENU ShowMenu();

#endif