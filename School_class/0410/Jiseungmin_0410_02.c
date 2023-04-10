// 컴퓨터 공학부 2022243094 지승민
// 파일명 : Jiseungmin_0410_02.c
// 제목 : 2차원 배열의 논리적 물리적 순서 확인하기

#include <stdio.h>

int main(void)
{
  int i, n = 0, *ptr;
  int sale[2][4] = {63, 84, 140, 30, 157, 209, 251, 312};
  ptr = &sale[0][0];

  for (i = 0; i < 2; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("\n address : %u sale[%d][%d] %d = %d", ptr, i, j, n, *ptr);
      n++;
      ptr++;
    }
  }
  getchar();
  return 0;
}
