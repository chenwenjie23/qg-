#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include"List.h"




int main()
{
	int b;
	struct tagList*a[2];
	do
	{
		printf("********0.�˳�***************\n");
		printf("********1.����˫������*******\n");
		printf("********2.�������***********\n");
		printf("********3.�������***********\n");
		printf("********4.ɾ��Ԫ��***********\n");
		printf("********5.����Ԫ��***********\n");
		printf("********6.���е�***********\n");
		printf("********7.�жϳɻ�***********\n");

		printf("�������Ӧ����ѡ������Ҫ�Ĺ��ܣ�\n");
		scanf("%d", &b);
		switch (b)
		{
		case 0:break;
		case 1:SXcreat(a);break;
		case 2:print(a[0]);break;
		case 3:Reverseprint(a[1]);break;
		case 4:del(a[0]);break;
		case 5:insert(a[0]);break;
		case 6:findmid(a[0]);break;
		case 7:circle(a[0]);break;
		}
	} while (b);
	return 0;
}

