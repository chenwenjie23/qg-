#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include"List.h"


#define LEN sizeof(struct tagList)
int n;

void SXcreat(int a[]) 
{
	struct tagList* head;
	struct tagList* p1, *p2;
	n = 0;
	p1 = p2 = (struct tagList*)malloc(LEN);
	printf("������ѧ����ѧ�źͳɼ���\n");
	scanf("%ld,%f", &p1->ele.num, &p1->ele.score);
	head = NULL;
	while (p1->ele.num != 0)
	{
		n += 1;
		if (n == 0)
		{
			head = p1;
			p1->prior = NULL;
		}
		else
		{
			p2->next = p1;
			p1->prior = p2;
		}
		p2 = p1;
		p1 = (struct tagList*)malloc(LEN);
		printf("������ѧ����ѧ�źͳɼ���\n");
		scanf("%ld,%f", &p1->ele.num, &p1->ele.score);
	}
		p2->next = NULL;
		a[0] = head;
		a[1] = p2->prior;
}
void print(struct tagList * head)
{
	struct tagList *p;
	p = head;
	if(head!=NULL)
		do
		{
			printf("%ld% %5.1f\n", p->ele.num, p->ele.score);
			p=p->next;
		} while (p != NULL);
}
void Reverseprint(struct tagList * perior)
{
	struct tagList *p;
	p = perior;
	if (perior != NULL)
		do
		{
			printf("%ld% %5.1f\n", p->ele.num, p->ele.score);
			p=p->prior;
		} while (p != NULL);
}

void del(struct tagList*head)
{
	long num;
	printf("\n��������Ҫɾ��Ԫ�ص���ţ�");
	scanf("%ld", &num);
	struct tagList * p1, *p2;
	p1 = p2 = head->next;
	if (head == NULL)
	{
		printf("\nlist null!\n");
	}
	while (num != p1->ele.num && p1->next != NULL)
	{
		p2 = p1;
		p1 = p1->next;
	}
	if (num == p1->ele.num)
	{
		if (p1 == head) head = p1->next;
		else p2->next = p1->next;
		printf("delete:%ld\n", num);
		n = n - 1;
	}
	else printf("%ld not been found!", num);
}

void insert(struct tagList* head)
{
	long num;
	printf("\n��������Ҫ����Ԫ�ص���ţ�");
	scanf("%ld", &num);
	struct tagList* p1, *p2, *p = malloc(LEN);
	printf("��������Ҫ����Ԫ�ص�����");
	scanf("%ld,%f", &p->ele.num, &p->ele.score);
	p1 = p2 = head->next;
	if (num == 1)
	{
		p->next = p1->next;
		p1 = p;
	}
	else
	{
		if (num == n + 1)
		{
			for (int i = 1;i < num - 1;i++)
			{
				p2 = p1;
				p1 = p1->next;
			}
			p1->next = p;
			p->next = NULL;
		}
		else
		{
			for (int i = 1;i < num;i++)
			{
				p2 = p1;
				p1 = p1->next;
			}
			p2->next = p;
			p->next = p1;
		}
	}
}
void findmid(struct tagList*head)
{
	//���ÿ�������ָ��
	struct tagList*p1, *p2;
	p1 = p2 = head;
	if (head != NULL)
		//һ��ָ��һ�α��������ڵ㣬һ��ָ�����һ�������������ʱ����ָ��λ�ü�Ϊ�е�
		do
		{
			p2 = p1 = p1->next;
			p1 = p1->next;
		} while (p1 != NULL);
		printf("%ld,%d", p2->ele.num, p2->ele.score);
}
void circle(struct tagList*head)
{
	//���ÿ�������ָ��
	struct tagList*p1, *p2;
	p1 = p2 = head;
	if (head != NULL)
		while (1)
		{
			p2 = p1 = p1->next;
			p1 = p1->next;
			if (p1->next = NULL)
				printf("���ɻ�");
			else
				if (p1 == p2)
					printf("�ɻ�");
		};
}


