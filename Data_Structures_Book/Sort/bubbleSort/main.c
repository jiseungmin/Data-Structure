#include <stdio.h>
void bubbleSort(int a[], int size);

int main(void)
{
  int i, list[8] = {69, 10, 30, 2, 16, 8, 31, 22}; // 정렬할 원소
  int size = sizeof(list) / sizeof(list[0]);
  printf("\n 정렬할 원소 : ");
  for (i = 0; i < size; i++)
    printf("%3d ", list[i]); // 정렬 전의 원소 출력
  printf("\n <<<<<< 버블 정렬  수행 >>>>>>>>>");
  bubbleSort(list, size); // 버블 정렬 함수 호출;
  getchar();
  return 0;
}