#pragma once
/*
	#ifndef �����_H ~ #endif : ��������� ��ġ�� ���� ���� ���� ������ ��ũ��
	(#ifndef ~ #endif(���ǰ� �� �Ǿ��ִ��� Ȯ��)�� �ݴ뱸�� #ifdef ~ #endif(���ǰ� �Ǿ��ִ��� Ȯ��))

	cpp���Ͽ��� #include "menu.h"�� 2�� �̻� ���� ��, 2��°����s ifndef�� ������ �ٷ� endif������ ���������� ��(�߰� ����x)
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

// �޴��� ����
enum MENU{MENU_ADD_STUDENT, MENU_SHOW_ALL, MENU_QUIT};

MENU ShowMenu();

#endif