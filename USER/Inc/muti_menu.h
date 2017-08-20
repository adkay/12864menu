#ifndef __MUTI_MENU_H
#define __MUTI_MENU_H

#include "delay.h"
#include "lcd12864.h"
#include "key.h"

#define u8 unsigned char 
#define u16 unsigned short
#define u32 unsigned int
	
//#define NULL (void*)0
#define SUBMENU_MAXNUM    10  //�Ӳ˵�����ж��ٸ�
typedef void(*FUNC_POINT)(void);

//����һ���˵���ṹ��
typedef struct MenuItem
{
	int num;  //�˵�����   ��Ӧ��ʾ��ģʽ  
						//����0��ʾ�����˵�  
						//0  �����һ���˵� ��ʾ��ʾ���û����棬���Լ������İ����������� 
						//С��0 �̶���ʽ�����ý���  ���Կ��ٸ����Լ���Ҫ�ı�Ĳ���
	u8 recordSubNum;  //��¼ѡ��˵����ֵ
	char *menuName;   //�˵�����
	char *submenuName[SUBMENU_MAXNUM];   //�˵����Ӧ������
	struct MenuItem **submenuPtr;        //�˵���ָ��Ĳ˵���ָ���ַ 
	struct MenuItem *parent;        //���˵���ָ��
	FUNC_POINT func;                // �û������Ӧ�� ����GUI����
	FUNC_POINT funcKeyUP;   				
	FUNC_POINT funcKeyDOWN;
	FUNC_POINT funcKeyLEFT;
	FUNC_POINT funcKeyRIGHT;
	
}Menu;





void KeyProc(void);
void displayCurrentMenu(void);
void initMenu(void);







#endif



