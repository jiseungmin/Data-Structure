// 컴퓨터 공학부 2022243094 지승민
// 파일명 : Jiseungmin_0410_04.c
// 제목 : 전처리기의 이해
#include <stdio.h>
#include "student.h"
#define PI 3.14159264
#define SUM(x, y) ((x) + (y))
#define MUL(x, y) ((x) * (y))

int main(void)
{
  double r, area;
  int x = 10, y = 20;
  Student a = {315, "홍길동"};
  printf("학번 : %d, 이름 : %s\n", a.num, a.name);

  printf("Input radius: ");
  scanf("%lf", &r);
  area = r * r * PI;
  printf(" \n Cicle Area: %.2lf\n", area);
  printf("x+y = %d\n", SUM(x, y));
  printf("x*y = %d", MUL(x, y));
  return 0;
}
