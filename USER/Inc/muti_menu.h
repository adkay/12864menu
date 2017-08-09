#ifndef __MUTI_MENU_H
#define __MUTI_MENU_H

#include "delay.h"
#include "lcd12864.h"
#include "key.h"

#define u8 unsigned char 
#define u16 unsigned short
#define u32 insigned int
//#define NULL (void*)0
#define SUBMENU_MAXNUM    10  //�Ӳ˵�����ж��ٸ�
typedef void(*FUNC_POINT)(void);

//����һ���˵���ṹ��
typedef struct MenuItem
{
	u8 num;   //�����˵�����
	u8 recordSubNum;
	char *menuName;
	char *submenuName[SUBMENU_MAXNUM];
	struct MenuItem **submenuPtr;
	struct MenuItem *parent;
	FUNC_POINT func;
	FUNC_POINT funcKeyUP;
	FUNC_POINT funcKeyDOWN;
	FUNC_POINT funcKeyLEFT;
	FUNC_POINT funcKeyRIGHT;
	
}Menu;





void KeyProc(void);
void displayCurrentMenu(void);
void initMenu(void);







#endif



