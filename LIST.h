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
void PushFront(List* L, int d); //ͷ��
void PopFront(List* L);//ɾ��
pNode Find(List* L, int d);//����Ԫ��
int Count(List* L);
void Display(List* L);//��ӡ

#endif 
