#define _CRT_SECURE_NO_WARNINGS
#include "LIST.h"
#include <stdio.h>
#include <stdlib.h>


void InitLinkLinst(List *L)
{
	*L = NULL;
}

void PushFront(List* L, int d)//头插
{
	Node* cur = *L;
	Node *p = (Node*)malloc(sizeof(Node));//动态开辟一块内存用来存放插入的元素
	memset(p, 0, sizeof(Node));
	p->data = d;
	p->next = NULL;
	p->next = *L;//将插入元素的next指针指向原链表的头结点
	*L = p;//链表重置后的新的头结点
}

void PopFront(List* L)//删除
{
	Node* cur = *L;
	if (cur == NULL)//空链表
	{
		return;
	}
	else           //非空链表
	{
		*L = cur->next;//链表重置后的新的头结点
		free(cur);
		cur = NULL;
	}
}

pNode Find(List* L, int d)//查找元素，若找到了返回位置，没找到返回空指针
{
	Node* cur = *L;
	while (cur != NULL)
	{
		if (cur->data == d)
		{
			printf("找到了！\n");
			return;
		}
		else
		{
			cur = cur->next;
		}
	}
	return NULL;
}

int Count(List L)//计数操作
{
	Node* cur = L;
	int count = 0;
	for (; cur != NULL; cur = cur->next)
	{
		count++;
	}
	return count;
}

void Display(List L)//循环打印
{
	Node* cur = L;
	for (; cur != NULL; cur = cur->next)
	{
		printf("%d--->", cur->data);
	}
	printf("NULL\n");
}