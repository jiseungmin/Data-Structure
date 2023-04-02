// 컴퓨터 공학부 2022243094 지승민
// 파일명 jiseungmin_0320_01.c
// 문자 배열과 NULL의 이해
#include <stdio.h>

int main(void)
{
  char univ[8] = "SUNMOON";
  char str[7] = {'S', 'U', 'N', 'M', 'O', 'O', 'N'};

  printf("univ[%d]:%c\n", 7, univ[7]);
  printf("str[%d]:%c\n", 7, str[7]);
  printf("--------------\n");

  for (int i = 0; i <= 9; i++)
  {
    printf("univ[%d]: %c\t", i, univ[i]);
    printf("str[%d]:%c\t", i, str[i]);
    printf("\n");
  }
  return 0;
}