// 컴퓨터 공학부 지승민
// 파일명 jiseungmin_0322_02.c
// 포인터를 사용하는 이유

#include <stdio.h>
void swap();

int main(void)
{
  int a = 10, b = 20;
  swap(&a, &b);
  printf("main a:%d, main b: %d\n", a, b);

  return 0;
}

void swap(int *pa, int *pb)
{
  int temp;
  temp = *pa;
  *pa = *pb;
  *pb = temp;

  printf("swap pa:%d swap pb:%d \n", *pa, *pb);
}