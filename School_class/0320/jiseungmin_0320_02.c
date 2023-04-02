// 컴퓨터 공학부 2022243094 지승민
// 파일명 jiseungmin_0320_02.c
// 입력한 문자열의 길이 계산하기

#include <stdio.h>

int main(void)
{
  int i, lenght = 0;
  char str[50];

  printf("\n 문자열을 입력하세요\n \"");
  gets(str);
  printf("\n 입력된 문자열은 \n \"");
  for (i = 0; str[i]; i++)
  {
    printf("%c", str[i]);
    lenght += 1;
  }
  printf("\" \n입니다.");
  printf("\n\n 입력된 문자열의 길이는=%d\n", lenght);
  getchar();
  return 0;
}