/*
  컴퓨터 공학부 지승민
  파일명 : jiseungmin_0403_06.c
  제목 : n팩토리얼 반복문으로 구현한기
*/
#include <stdio.h>

void main()
{
  int n;
  int i;
  long long fact;

  printf("Input : ");
  scanf("%d", &n);
  fact = 1;
  i = 1;
  while (i <= n)
  {
    fact = fact * i;
    i = i + 1;
  }
  printf("팩토리얼 값 %lld이다", fact);
}
