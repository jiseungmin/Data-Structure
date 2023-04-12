// 컴퓨터 공학부 2022243094 지승민
// 파일명 : Jiseungmin_0412_01sub.c
// 제목 :

#include <stdio.h>
void input_data(int *pa, int *pb)
{
  printf("두 정수 입력 : ");
  scanf("%d%d", pa, pb);
}

double average(int a, int b)
{
  int tot;
  double avg;

  tot = a + b;
  avg = tot / 2.0;
  return avg;
}
