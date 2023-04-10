// 컴퓨터 공학부 2022243094 지승민
// 파일명 : Jiseungmin_0410_03.c
// 제목 : 3차원 배열의 논리적 물리적 순서 확인하기

#include <stdio.h>

int main(void)
{
  int i, j, n = 0, *ptr;
  int sale[2][2][4] = {{{63, 84, 140, 30}, {157, 209, 251, 312}},
                       {{59, 80, 130, 135}, {149, 187, 239, 310}}};
  ptr = &sale[0][0][0];

  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
      for (j = 0; j < 2; j++)
      {
        for (int k = 0; k < 4; k++)
        {
          printf(" \n address: %u sale[%d][%d][%d] %2d = %3d", ptr, i, j, k, n, *ptr);
          n++;
          ptr++;
        }
      }
  }
  getchar();
  return 0;
}
