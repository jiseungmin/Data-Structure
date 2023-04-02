// 컴퓨터 공학부 지승민
// 파일명 jiseungmin_0329_03.c
// 문자열 배열과 포인터의 차이

#include <stdio.h>
#include <stdlib.h>

void main()
{
  int i;
  char *ptrArray[4] = {{"korea"}, {"Seoul"}, {"Mapo"}, {"152번지 2/3"}};
  for (i = 0; i < 4; i++)
  {
    printf("\n %s", ptrArray[i]);
  }
  ptrArray[2] = "Jongo";
  printf("\n\n");
  for (i = 0; i < 4; i++)
  {
    printf("\n %s", ptrArray[i]);
  }
  getchar();
}