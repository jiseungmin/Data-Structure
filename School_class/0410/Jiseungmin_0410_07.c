// 컴퓨터 공학부 2022243094 지승민
// 파일명 : Jiseungmin_0410_07.c
// 제목 :  사칙연산 계산기 프로그램

#include <stdio.h>
#define input_expresion(a, op, b) (scanf("%d%c%d", &a, &op, &b))
#define ADD(x, y) ((x) + (y))
#define SUB(x, y) ((x) - (y))
#define MUL(x, y) ((x) * (y))
#define DIV(x, y) ((x) / (y))

int main(void)
{
  int a, b, res;
  char op;

  while (1)
  {
    printf("> enter EQ(end Ctrl + Z) : ");
    if (input_expresion(a, op, b) < 0)
      break;

    switch (op)
    {
    case '+':
      res = ADD(a, b);
      break;
    case '-':
      res = SUB(a, b);
      break;
    case '*':
      res = MUL(a, b);
      break;
    case '/':
      res = DIV(a, b);
      break;
    default:
      res = 0;
    }
    printf("@ %d %c %d = %d\n", a, op, b, res);
  }

  return 0;
}
