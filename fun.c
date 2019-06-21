#define _CRT_SECURE_NO_WARNINGS
#include "LIST.h"
#include <stdio.h>
#include <stdlib.h>


void InitLinkLinst(List *L)
{
	*L = NULL;
}

void PushFront(List* L, int d)//ͷ��
{
	Node* cur = *L;
	Node *p = (Node*)malloc(sizeof(Node));//��̬����һ���ڴ�������Ų����Ԫ��
	memset(p, 0, sizeof(Node));
	p->data = d;
	p->next = NULL;
	p->next = *L;//������Ԫ�ص�nextָ��ָ��ԭ�����ͷ���
	*L = p;//�������ú���µ�ͷ���
}

void PopFront(List* L)//ɾ��
{
	Node* cur = *L;
	if (cur == NULL)//������
	{
		return;
	}
	else           //�ǿ�����
	{
		*L = cur->next;//�������ú���µ�ͷ���
		free(cur);
		cur = NULL;
	}
}

pNode Find(List* L, int d)//����Ԫ�أ����ҵ��˷���λ�ã�û�ҵ����ؿ�ָ��
{
	Node* cur = *L;
	while (cur != NULL)
	{
		if (cur->data == d)
		{
			printf("�ҵ��ˣ�\n");
			return;
		}
		else
		{
			cur = cur->next;
		}
	}
	return NULL;
}

int Count(List L)//��������
{
	Node* cur = L;
	int count = 0;
	for (; cur != NULL; cur = cur->next)
	{
		count++;
	}
	return count;
}

void Display(List L)//ѭ����ӡ
{
	Node* cur = L;
	for (; cur != NULL; cur = cur->next)
	{
		printf("%d--->", cur->data);
	}
	printf("NULL\n");
}