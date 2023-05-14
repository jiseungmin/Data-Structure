#include <stdio.h>
#include "sequentialSearch.h"

void sequentialSearch1(element a[], int n, element key)
{
  int i = 0;
  printf("\n%d를 검색하라! ->>", key);
  while (i < n && a[i] != key)
    i++;
  if (i < n)
    printf("%3d번째에 검색 성공! \n\n", i + 1);
  else
    printf("%3d번째에 검색 실패! \n\n", i + 1);
}

void sequentialSearch2(element a[], int n, element key)
{
  int i = 0;
  printf("\n%3d를 검색하라! ->>", key);
  while (i < n && a[i] != key)
    i++;
  if (a[i] == key)
    printf("%3d번째에 검색 성공! \n\n", i + 1);
  else
    printf("%3d번째에 검색 실패! \n\n", i + 1);
}

void sequentialSearch3(element a[], int begin, int end, element key)
{
  int i = begin;
  printf("\n%3d를 검색하라! ->>", key);
  while (i < end && a[i] < key)
    i++;
  if (a[i] == key)
    printf("%3d번쨰에 검색성공 ! \n", (i - begin) + 1);
  else
    printf("%3d번쨰에 검색 실패 \n", (i - begin) + 1);
}
