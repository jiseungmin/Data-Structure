// 컴퓨터 공학부
// 제목 : 중간고사 code01
#include <stdio.h>
#include <string.h>

int main(void)
{
  char *univ = "SunMoon";
  char str[80] = "Seoul";

  printf(" univ : %s\n", univ);
  printf(" Size univ:%d\n", sizeof(univ));

  univ = "Asan";
  strcpy(str, "korea");

  printf(" Size str:%d\n", sizeof(str));
  printf(" str: %s\n", str);
}