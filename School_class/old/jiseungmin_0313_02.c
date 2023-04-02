// 컴퓨터 공학부 2022243094 지승민
// 파일명 : jiseungmin_0313_02.c
// 제목 : 2~9까지의 구구단을 출력하는 프로그램
#include <stdio.h>
int main(void)
{
  for (int i = 2; i < 10; i++)
  {
    for (int j = 1; j < 10; j++)
    {
      printf(" %2d X %d = %2d", i, j, i * j);
    }
    printf("\n");
  }
  return 0;
}
