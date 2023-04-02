#include <stdio.h>

int main(void)
{
  float x = 1.234567890123456789;
  float y = 1.234567890123456789;
  long double z = 1.234567890123456789;

  printf("%.19f size=%d\n", x, sizeof(x));
  printf("%.19lf size=%d\n", y, sizeof(y));
  printf("%.19Lf size=%d\n", z, sizeof(z));

  return 0;
}