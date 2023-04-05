// 컴퓨터 공학부 2022243094 지승민
// 파일명 : Jiseungmin_0405_02.c
// 제목 : n! 재귀 호출로 구현하기 (while 문) 시험에 나옴

#include <stdio.h>

int factorial(int x);

int main(void)
{
  int x;
  printf("Input x :");
  scanf("%d", &x);
  printf("\n %d factorial : %d \n", x, factorial(x));
  return 0;
}

int factorial(int n)
{
  int fact = 1;
  while (n > 1)
  {
    fact *= n--;
    printf("x=%d \t x!=%d\n", n + 1, fact);
  }
  return fact;
}