// 컴퓨터 공학부 지승민 2022243094
// 파일명 : jiseungmin_0426_02.c
// 제목 : 자기 참조 구초체의 이해2

#include <stdio.h>

struct list
{
  int data;
  struct list *next;
} a, b, c;

void main()
{
  a.data = 1;
  b.data = 2;
  c.data = 3;
  a.next = &b;
  b.next = &c;
  c.next = NULL;

  printf("Adress a:%u\tValue: %d\n", a, a.data);
  printf("Adress b:%u\tValue: %d\n", a.next, a.next->data);
  printf("Adress c:%u\tValue: %d\n", a.next->next, a.next->next->data);
}