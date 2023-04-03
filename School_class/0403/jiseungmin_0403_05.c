/*
  컴퓨터 공학부 지승민
  파일명 : jiseungmin_0403_05.c
  제목 : 재귀호출 함수
*/
#include <stdio.h>
void fruit(int count); //

int main(void)
{
  fruit(1);

  return 0;
}

void fruit(int count)
{
  printf("count = %d, apple \n", count);
  if (count == 3)
    return;
  fruit(count + 1);
  printf("count= %d, jam\n", count);
}
