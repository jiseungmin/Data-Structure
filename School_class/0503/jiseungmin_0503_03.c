// 컴퓨터 공학부 지승민 2022243094
// 파일명 : jiseungmin_0503_03.c
// 제목 : 입력한 수만큼 동적 메모리 할당[1] – 입력한 점수의 총점과 평균(소수 둘째 자리까지 출력) 구하기

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int cnt, std, sum = 0;
  int *score;
  float avg = 0.0;

  printf("학생수 입력 :");
  scanf("%d", &std);

  score = (int *)malloc(std * sizeof(int));

  if (score == NULL)
  {
    printf("동적 메모리 할당 오류 발생 \n");
    exit(1);
  }

  for (cnt = 0; cnt < std; cnt++)
  {
    printf("학생 # %d-%d 성적 입력 :", std, cnt + 1);
    scanf("%d", &score[cnt]);
    sum += score[cnt];
  }

  printf("총점 : %d\n\n", sum);

  for (cnt = 0; cnt < std; cnt++)
  {
    printf("학생 # %d-%d 성적 입력 : %d\n", std, cnt + 1, score[cnt]);
  }

  avg = (float)sum / std;
  printf("평균 점수 : %.2f\n", avg);

  free(score);
  return 0;
}
