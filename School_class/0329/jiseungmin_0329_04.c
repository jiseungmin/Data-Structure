// 컴퓨터 공학부 지승민
// 파일명 jiseungmin_0329_04.c
// 문자열 배열과 포인터의 차이

#include <stdio.h>
#include <stdlib.h>

void main()
{
  char *ptrArray[2];
  char **ptrptr;
  int i;

  ptrArray[0] = "Korea";
  ptrArray[1] = "Seoul";

  ptrptr = ptrArray;
  printf("\n ptrArray[0]의 주소 (&ptrArray[0]) = %u", &ptrArray[0]);
  printf("\n ptrArray[0]의 값 (ptrArray[0]) = %u", ptrArray[0]);
  printf("\n ptrArray[0]의 참조값 (*ptrArray[0]) = %c", *ptrArray[0]);
  printf("\n ptrArray[0]의 참조문자열 (*ptrArray[0]) = %s \n", *ptrArray);

  printf("\n ptrArray[1]의 주소 (&ptrArray[1]) = %u", &ptrArray[1]);
  printf("\n ptrArray[1]의 값 (ptrArray[1]) = %u", ptrArray[1]);
  printf("\n ptrArray[1]의 참조값 (*ptrArray[1]) = %c", *ptrArray[1]);
  printf("\n ptrArray[1]의 참조문자열 (*ptrArray[1]) = %s \n", *(ptrArray + 1));

  printf("\n ptrptr의 주소 (&ptrptr) = %u", &ptrptr);
  printf("\n ptrptr의 값 (ptrptr) = %u", ptrptr);
  printf("\n ptrptr의 1차 참조값 (*ptrptr) = %u", *ptrptr);
  printf("\n ptrptr의 2차 참조값 (**ptrptr) = %c", **ptrptr);
  printf("\n ptrptr의 2차 참조문자열 (**ptrptr) = %s \n", *ptrptr);

  printf("\n\n *ptrArray[0] : ");
  for (int i = 0; i < 5; i++)
  {
    printf("%c", *(ptrArray[0] + i));
  }
  printf("\n **ptrptr : ");
  for (int i = 0; i < 5; i++)
  {
    printf("%c", *(*ptrptr + i));
  }
  printf("\n\n *ptrArray[1] : ");
  for (int i = 0; i < 5; i++)
  {
    printf("%c", *(ptrArray[1] + i));
  }

  printf("\n **(ptrptr+1) : ");
  for (int i = 0; i < 5; i++)
  {
    printf("%c", *(*(ptrptr + 1) + i));
  }
  getchar();
}