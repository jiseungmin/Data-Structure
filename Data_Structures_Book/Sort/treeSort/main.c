#include <stdio.h>
void treeSort(int a[], int n);

int main(void)
{
  int i, list[8] = {69, 10, 30, 2, 16, 8, 31, 22};
  int size = sizeof(list) / sizeof(list[0]); // list 배열의 원소 개수
  printf("\n 정렬할 원소 :");
  for (i = 0; i < size; i++)
    printf("%3d ", list[i]);
  printf("\n\n<<<<<<<< 셸 정렬 수행 >>>>>>>\n");
  treeSort(list, size);

  getchar();
  return 0;
}
