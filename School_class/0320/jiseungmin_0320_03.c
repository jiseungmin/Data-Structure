// 컴퓨터 공학부 2022243094 지승민
// 파일명 jiseungmin_0320_03.c
// 대소문자 변환 프로그램
#include <stdio.h>

int main(void)
{
  char str[80];
  int cnt = 0;
  int i;

  printf("문자 입력 : \n");
  gets(str);

  for (i = 0; str[i] != '\0'; i++)
  {
    if ((str[i] >= 'A') && (str[i] <= 'Z'))
    {
      str[i] += ('a' - 'A');
      cnt++;
    }
  }
  printf("바뀐 문장 :");
  puts(str);
  printf("바뀐 문자 수 : %d\n", cnt);

  return 0;
}