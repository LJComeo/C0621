#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "LIST.h"
#include <assert.h>

int menu()
{
	int choice = 0;
	printf("■■■■■■■■■■■■\n");
	printf("■       1.建立       ■\n");
	printf("■       2.删除       ■\n");
	printf("■       3.查找       ■\n");
	printf("■       4.计数       ■\n");
	printf("■       5.输出       ■\n");
	printf("■       0.退出       ■\n");
	printf("■■■■■■■■■■■■\n");
	printf("请输入您的选择：\n");
	scanf("%d", &choice);
	return choice;
}
void test()
{
	int op;
	int n;
	struct Node * L;
	while (1){
		op = menu();
		InitLinkLinst(&L);
		switch (op)
		{
		case 1:
			PushFront(&L, 5);
			PushFront(&L, 7);
			PushFront(&L, 8);
			PushFront(&L, 9);
			PushFront(&L, 2);
			Display(L);
			break;
		case 2:
			PushFront(&L, 5);
			PushFront(&L, 7);
			PushFront(&L, 8);
			PushFront(&L, 9);
			PushFront(&L, 2);
			PopFront(&L);
			Display(L);
			break;
		case 3:
			PushFront(&L, 5);
			PushFront(&L, 7);
			PushFront(&L, 8);
			PushFront(&L, 9);
			PushFront(&L, 2);
			Find(&L, 7);
			break;
		case 4:
			PushFront(&L, 5);
			PushFront(&L, 7);
			PushFront(&L, 8);
			PushFront(&L, 9);
			PushFront(&L, 2);
			n=Count(L);
			printf("单链表中共有%d个结点\n", n);
			break;
		case 5:
			PushFront(&L, 5);
			PushFront(&L, 7);
			PushFront(&L, 8);
			PushFront(&L, 9);
			PushFront(&L, 2);
			Display(L);
			break;
		case 0:
			printf("退出！\n");
			break;
		default:
			break;
		}
	}
}

int main()
{
	test();
	system("pause");
	return 0;
}