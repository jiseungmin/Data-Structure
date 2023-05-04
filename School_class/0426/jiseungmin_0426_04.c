// 컴퓨터 공학부 지승민 2022243094
// 파일명 : jiseungmin_0426_04.c
// 제목 : 포인터를 이용하여 연결리스트 구현 1

#include <stdio.h>
#include <stdlib.h>

struct list *create();
void print(struct list *head);

struct list
{
  int data;
  struct list *next;
};

struct list *create()
{
  struct list *a, *b, *c;
  a = (struct list *)malloc(sizeof(struct list));
  b = (struct list *)malloc(sizeof(struct list));
  c = (struct list *)malloc(sizeof(struct list));
  a->data = 10;
  b->data = 20;
  c->data = 30;
  a->next = b;
  b->next = c;
  c->next = NULL;
  return a;
};

void print(struct list *head)
{
  while (head)
  {
    printf("%d\n", head->data);
    head = head->next;
  }
}

void main()
{
  struct list *head;
  head = create();
  print(head);
}