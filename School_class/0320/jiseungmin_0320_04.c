// 컴퓨터 공학부 2022243094 지승민
// 파일명 jiseungmin_0320_04.c
// 3차원 배열 입출력 하기
#include <stdio.h>

int main(void)
{
  int array[2][3][4];
  int i, j, k, value = 1;
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 3; j++)
    {
      for (k = 0; k < 4; k++)
      {
        array[i][j][k] = value;
        printf("\n array[%d][%d][%d]= %d", i, j, k, array[i][j][k]);
        value++;
      }
    }
  }
  getchar();
  return 0;
}