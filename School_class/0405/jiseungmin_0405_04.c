// 컴퓨터 공학부 2022243094 지승민
// 파일명 : Jiseungmin_0405_04.c
// 제목 :

#include <stdio.h>

int count;

int fibonacci(int n);

int main(void)
{
  int result = fibonacci(40);
  printf("result : %d \n", result);
  printf("count : %d \n", count);
  return 0;
}

int fibonacci(int n)
{
  count++;
  if (n == 1 || n == 2)
  {
    return 1;
  }
  else
  {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}
