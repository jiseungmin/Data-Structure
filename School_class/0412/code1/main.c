// 컴퓨터 공학부 2022243094 지승민
// 파일명 : Jiseungmin_0412_01.c
// 제목 :

#include <stdio.h>
void input_data(int *, int *);
double average(int, int);

int main(void)
{
  int a, b;
  double avg;

  input_data(&a, &b);
  avg = average(a, b);
  printf("%d와 %d의 평균 : %.1lf\n", a, b, avg);

  return 0;
}
// gcc main.c -c
// gcc sub.c -c
// gcc main.o sub.o -o gccompile
// ./gccompile 실행