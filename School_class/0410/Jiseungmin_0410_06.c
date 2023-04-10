// 컴퓨터 공학부 2022243094 지승민
// 파일명 : Jiseungmin_0410_06.c
// 제목 : #pragma를 사용한 바이트 얼라인먼트 변경

#include <stdio.h>
#pragma pack(push, 1)
typedef struct
{
  char ch;
  int in;
} Sample1;

int main(void)
{
  Sample1 a;
  a.ch = 'A';
  a.in = 10;
  printf("\n Size a 구조체 크기: %d바이트", sizeof(a));
  printf("\n Size Sample1 구조체 크기: %d바이트", sizeof(a));
  return 0;
}
