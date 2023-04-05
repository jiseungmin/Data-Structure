// 컴퓨터 공학부 2022243094 지승민
// 파일명 : Jiseungmin_0405_01.c
// 제목 : n! 재귀 호출로 구현하기

#include <stdio.h>

int fact(int x);

void main(void)
{
  int n, result;
  printf("input n :");
  scanf("%d", &n);
  result = fact(n);
  printf("n! =%d", result);
}

int fact(int x)
{
  if (x <= 1)
  {
    return 1;
  }
  else
  {
    return x * fact(x - 1);
  }
}