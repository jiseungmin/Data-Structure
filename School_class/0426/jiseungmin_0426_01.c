// 컴퓨터 공학부 지승민 2022243094
// 파일명 : jiseungmin_0426_01.c
// 제목 : 자기 참조 구초체의 이해1
#include <stdio.h>

struct list
{
  int data;
  struct list *next;
};

void main(void)
{
  printf("Linked list Excerciste");
}