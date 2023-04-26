// 컴퓨터 공학부 지승민 2022243094
// 파일명 : jiseungmin_0426_05.c
// 제목 : 노드 삭제

#include <stdio.h>
#include <stdlib.h>

struct list *create();
void print(struct list *head, int n);

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

void print(struct list *head, int n)
{
  while (head)
  {
    if (head->data == n)
    {
      head = head->next;
    }

    printf("%d\n", head->data);
    head = head->next;
  }
}

void main()
{
  struct list *head;
  int num;
  head = create();

  printf("input data of deleteing node:");
  scanf("%d", &num);
  print(head, num);
}