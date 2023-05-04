// 컴퓨터 공학부 지승민 2022243094
// 파일명 : jiseungmin_0503_01.c
// 제목 : 동적메모리 할당의 이해

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  char a[10];
  char *c;
  // 문자열 저장 공간 할당
  strcpy(a, "SUNMOON");
  strcpy(c, "Seoul");

  printf("a:%s \t Address:%u\t Size:%d\n", a, a, sizeof(a));
  printf("a:%s \t Address:%u\t Size:%d\n", c, c, sizeof(c));

  printf("c Size: %d", _msize(c));

  free(c);
  return 0;
}