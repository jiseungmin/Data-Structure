/*
  컴퓨터 공학부 지승민
  파일명 : jiseungmin_0403_07.c
  제목 : n팩토리얼 반복문으로 구현한기
*/
#include <stdio.h>
long long fact(int n);

int main()
{
  int n;
  long long result;
  printf(" input : ");
  scanf("%d", &n);
  result = fact(n);
  printf("\n\n %d! = %lld \n", n, result);
  getchar();
}

long long fact(int n)
{
  long long value;
  if (n <= 1)
  {
    printf(" \n fact(1) call!");
    printf("\n fact(1) 1 return!");
    return 1;
  }
  else
  {
    printf(" \n fact(%d) call!", n);
    value = (n * fact(n - 1));
    printf("\n fact(%d) %lld return!!", n, value);
    return value;
  }
}
