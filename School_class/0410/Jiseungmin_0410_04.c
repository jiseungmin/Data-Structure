// 컴퓨터 공학부 2022243094 지승민
// 파일명 : Jiseungmin_0410_04.c
// 제목 : 매크로 연산자 #과 ##
// # :  치환    ## : 합침
#include <stdio.h>
#define PRINT_EXPR(x) printf(#x " = %d\n", x)
#define NAME_CAT(x, y) (x##y)

int main(void)
{
  int a1, a2;
  NAME_CAT(a, 1) = 10;
  NAME_CAT(a, 2) = 20;
  PRINT_EXPR(a1 + a2);
  PRINT_EXPR(a2 - a1);

  return 0;
}
