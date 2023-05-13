#include <stdio.h>

void radixSort(int a[], int n);

int main(void)
{
  int i, list[8] = {69, 10, 30, 2, 16, 8, 31, 22};
  int size = sizeof(list) / sizeof(list[0]); // list 배열의 원소 개수
  printf("\n 정렬할 원소 : ");
  for (i = 0; i < size; i++)
    printf("%3d", list[i]);
  printf("\n\n <<<< 기수 정렬 수행 >>>>");
  radixSort(list, size); // 기수 정렬 함수 호출

  getchar();
  return 0;
}