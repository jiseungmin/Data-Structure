// 컴퓨터 공학부 2022243094 지승민
// 파일명 : jiseungmin_0313_01.c
// 제목 : 1~100까지 짝수의 합을 구하는 문제

#include <stdio.h>
int main(void)
{
  int sum = 0;
  for (int i = 1; i < 101; i++)
  {
    if (i % 2 != 0)
      continue;
    sum = sum + i;
    printf("i=%d\t sum=%d\n", i, sum);
  };
  return 0;
}