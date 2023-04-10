// 컴퓨터 공학부 2022243094 지승민
// 파일명 : Jiseungmin_0410_05.c
// 제목 : 매크로 연산자 #과 ##
// # :  치환    ## : 합침
#include <stdio.h>
#define VER 6
#define BIT16

int main(void)
{
  int max;
#if VER >= 6
  printf("Version is %d입니다. \n", VER);
#else
  printf("Version is less than 6\n");
#endif

#ifdef BIT16
  max = 32767;
#else
  max = 2147483547;
#endif
  printf("int형 변수의 최댓값: %d \n", max);
  return 0;
}
