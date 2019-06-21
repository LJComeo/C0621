#ifndef __LIST__H__
#define __LIST__H__

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
	int data;
	struct Node *next;
}Node, *pNode, *List;

void InitLinkLinst(List *L);
void PushFront(List* L, int d); //头插
void PopFront(List* L);//删除
pNode Find(List* L, int d);//查找元素
int Count(List* L);
void Display(List* L);//打印

#endif 
