// 컴퓨터 공학부 2022243094 지승민
// 파일명 jiseungmin_0320_05.c
// 3차원 배열을 이용해 문자 배열 입출력하기
#include <stdio.h>

int main(void)
{
  int i, j, k;
  char student[2][3][20];

  for (i = 0; i < 2; i++)
  {
    printf("\n 학생 %d의 이름 : ", i + 1);
    gets(student[i][0]);
    printf("\n 학생 %d의 학과 : ", i + 1);
    gets(student[i][1]);
    printf("\n 학생 %d의 학번 : ", i + 1);
    gets(student[i][2]);
  }

  for (i = 0; i < 2; i++)
  {
    printf("\n\n 학생%d", i + 1);
    for (j = 0; j < 3; j++)
    {
      printf("\n\t");
      for (k = 0; student[i][j][k] != '\0'; k++)
      {
        printf("%c", student[i][j][k]);
      }
    }
  }
  getchar();

  return 0;
}