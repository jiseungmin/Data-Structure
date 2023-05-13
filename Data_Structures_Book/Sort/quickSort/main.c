#include <stdio.h>

void quickSort(int a[], int begin, int end, int size);

int main(void)
{
  int i, list[8] = {69, 10, 30, 2, 16, 8, 31, 22};
  int size = sizeof(list) / sizeof(list[0]); // list 배열의 원소 개수
  printf("\n 정렬할 원소 : ");
  for (i = 0; i < size; i++)
    printf("%3d", list[i]);
  quickSort(list, 0, size - 1, size); // 퀵 정렬  함수 호출
  getchar();
  return 0;
}