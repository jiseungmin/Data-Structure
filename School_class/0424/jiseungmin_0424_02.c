// 컴퓨터 공학부
// 제목 : 중간고사 code02

#include <stdio.h>
#define SUNMOON 4.5 // 매크로 상수

int main(void)
{
  int a;
#if SUNMOON == 3
  printf("Grade: %.lf\n", SUNMOON);
#else
  printf("Grade: %d\n", SUNMOON);
#endif
  printf("Test");

  return 0;
}