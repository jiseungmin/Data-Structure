// 컴퓨터 공학부 2022243094 지승민
// 파일명 : jiseungmin_0315_02.c
// 제목 : 총점
#include <stdio.h>

int main(void)
{
  int i;
  int score[5];
  int total = 0;
  double avg;

  for (i = 0; i < 5; i++)
  {
    scanf("%d", &score[i]);
  }

  for (i = 0; i < 5; i++)
  {
    total += score[i];
  }

  avg = total / 5.0;

  for (i = 0; i < 5; i++)
  {
    printf("%5d", score[i]);
  }

  printf("\n");
  printf("평균 : %.1lf\n", avg);

  return 0;
}