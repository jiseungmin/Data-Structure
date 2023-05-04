// 컴퓨터 공학부 지승민 2022243094
// 파일명 : jiseungmin_0503_02.c
// 제목 : 동적 메모리 할당하기[1] - 점수 3개를 저장할 동적 메모리를 배열을 사용하여 할당하는 프로그램

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int cnt;
  int *score;
  score = malloc(3 * sizeof(int));

  if (score == NULL)
  {
    printf("동적메모리 할당 오류");
    exit(1);
  }

  score[0] = 97;
  score[1] = 88;
  score[2] = 93;

  for (cnt = 0; cnt < 3; cnt++)
  {
    printf("%d번째 점수 : %d\n", cnt + 1, score[cnt]);
  }

  free(score);
  return 0;
}
