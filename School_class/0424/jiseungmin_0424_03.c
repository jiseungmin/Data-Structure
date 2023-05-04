// 컴퓨터 공학부
// 제목 : 중간고사 code03

#include <stdio.h>

int main(void)
{
  int i, j, cnt = 0, *a;
  int sale[2][4];

  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 4; j++)
    {
      sale[i][j] = cnt++;
    }
  }

  a = &sale[0][0];
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 4; j++)
    {
      printf("\n address : %p sale[%d][%d]= %d", a, i, j, *a);
      a++;
    }
  }
  return 0;
}
