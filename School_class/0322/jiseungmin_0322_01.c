// 컴퓨터 공학부 지승민
// 파일명 jiseungmin_0322_01.c
// 주소 연산자와 참조연산자의 이해

#include <stdio.h>

int main(void)
{
  int a = 10, b;
  char c = 'A';
  int *p = &c;

  printf("size of a: %d\n", sizeof(c));
  printf("size of p: %d\n", sizeof(p));
  printf("size of *p: %d\n", sizeof(*p));

  return 0;
}