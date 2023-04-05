// 컴퓨터 공학부 2022243094 지승민
// 파일명 : Jiseungmin_0405_03.c
// 제목 : 하노이의 탑

#include <stdio.h>

void hanoi(int n, int start, int work, int target);
void main(void)
{
  hanoi(3, 'A', 'B', 'C');
  getchar();
}

void hanoi(int n, int start, int work, int target)
{
  if (n == 1)
  {
    printf(" %c에서 원반 %d를(을) %c로 옮김 \n", start, n, target);
  }
  else
  {
    hanoi(n - 1, start, target, work);
    printf(" %c에서 원반 %d를(을) %c로 옮김 \n", start, n, target);
    hanoi(n - 1, work, start, target);
  }
}
