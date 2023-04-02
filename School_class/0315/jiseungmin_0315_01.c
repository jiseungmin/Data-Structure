// 컴퓨터 공학부 2022243094 지승민
// 파일명 : jiseungmin_0315_01.c
// 제목 : 배열 선언과 주소의 이해 9p
#include <stdio.h>
int main(void)
{
  int score[5] = {1, 2, 3, 4, 5};
  int i;
  int total = 0;

  char c, c_array[100];
  short s, s_array[100];
  float f, f_array[100];
  double d, d_array[100];

  printf("Size c : %d, Size c_array: %d\n", sizeof(c), sizeof(c_array));
  printf("Size s : %d, Size c_array: %d\n", sizeof(s), sizeof(s_array));
  printf("Size f : %d, Size c_array: %d\n", sizeof(f), sizeof(f_array));
  printf("Size d : %d, Size c_array: %d\n", sizeof(d), sizeof(d_array));

  printf("AD score : : %u\n", score);
  printf("AD score[0]: %u\n", &score[0]);
  printf("AD score[1]: %u\n", &score[1]);
  printf("AD score[2]: %u\n", &score[2]);
  printf("AD score[3]: %u\n", &score[3]);
  printf("AD score[4]: %u\n", &score[4]);
  printf("AD i : %u\n", &i);
  printf("AD total : %u\n", &total);

  return 0;
}
