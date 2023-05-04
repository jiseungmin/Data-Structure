// 컴퓨터 공학부 지승민 2022243094
// 파일명 : jiseungmin_0426_03.c
// 제목 : 자기 참조 구초체의 이해3

#include <stdio.h>

struct list
{
  int data;
  struct list *next;
} a, b, c, d;

int main()
{
  struct list *head;
  head = &a;

  a.data = 1;
  b.data = 2;
  c.data = 3;
  d.data = 4;

  a.next = &b;
  b.next = &c;
  c.next = &d;
  d.next = NULL;

  while (head)
  {
    printf("Adress head : %u\n", head);
    printf(" %d\n", head->data);
    head = head->next;
  }
  printf("Last head: %s\n", head);
}