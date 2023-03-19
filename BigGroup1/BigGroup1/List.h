#pragma once
#define LEN sizeof(struct tagList)

typedef struct Student {
	long num;
	float score;
}student;
typedef student Element;
typedef struct tagList {

	Element ele;
	struct tagList * prior;
	struct tagList * next;
}List, PList;
void SXcreat(int a[]);
void print(struct tagList * head);
void Reverseprint(struct tagList * perior);
void del(struct tagList*head);
void insert(struct tagList* head);
void findmid(struct tagList*head);
void circle(struct tagList*head)