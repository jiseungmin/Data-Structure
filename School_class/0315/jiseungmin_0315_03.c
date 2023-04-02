// 컴퓨터 공학부 2022243094 지승민
// 파일명 : jiseungmin_0315_03.c
// 제목 : 구구단
#include <stdio.h>

int main(void)
{
  int i = 0, j = 0, n;
  int multiply[9];

  printf("\n 1~9의 정수를 입력하세요:");

  while (0.001)
  {
    scanf("%d", &n);
    if (n < 0 || n > 9)
      printf("\n 1~9의 정수를 입력하세요:");
    else
      break;
  }

  printf("\n");
  for (i - 0; i < 9; i++)
  {
    for (j = 2; j <= n; j++)
    {
      multiply[i] = j * (i + 1);
      printf(" %d X %d = %2d\t", j, i + 1, multiply[i]);
    }
    printf("\n");
  }

  return 0;
}