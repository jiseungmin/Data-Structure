/*
  컴퓨터 공학부 지승민
  파일명 : jiseungmin_0403_03.c
  제목 : 1부터 100까지 3의 배수의 합
*/
#include <stdio.h>
int sum_times(int x);

int main(void)
{
  int n = 3;
  sum_times(n); // 함수의 호출
}

int sum_times(int x) // 함수의 정의
{
  int sum = 0;
  for (int i = 0; i < 100; i++)
  {
    if (i % x == 0)
    {
      sum += i;
      printf("i = %d , sum=%4d\n", i, sum);
    }
  }
}