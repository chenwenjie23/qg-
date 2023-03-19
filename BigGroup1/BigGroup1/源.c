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
		printf("********0.退出***************\n");
		printf("********1.创建双向链表*******\n");
		printf("********2.正向遍历***********\n");
		printf("********3.反向遍历***********\n");
		printf("********4.删除元素***********\n");
		printf("********5.插入元素***********\n");
		printf("********6.找中点***********\n");
		printf("********7.判断成环***********\n");

		printf("请输入对应数字选择你需要的功能：\n");
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

