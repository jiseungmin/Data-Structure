// 컴퓨터 공학부 2022243094 지승민
// 파일명 : Jiseungmin_0410_01.c
// 제목 : 원소의 논리적 물리적 순서

#include <stdio.h>

int main(void)
{
  int i, sale[4] = {159, 209, 251, 312};
  for (i = 0; i < 4; i++)
  {
    printf("\n address : %u sale[%d]= %d", &sale[i], i, sale[i]);
  }
  getchar();
  return 0;
}
