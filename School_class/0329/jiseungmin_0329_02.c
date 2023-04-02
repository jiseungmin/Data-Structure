// 컴퓨터 공학부 지승민
// 파일명 jiseungmin_0329_02.c
// 문자열 배열과 포인터의 차이

#include <stdio.h>
#include <string.h>

int main(void)
{
  char *pc = "mango";
  char str[80] = "apple";

  pc = "banana";
  // str = "banana"; // 배열명은 상수이기때문에 대입 불가
  strcpy(str, "banana");

  printf("Size pc:%d\n", sizeof(pc));
  printf("Size str:%d\n", sizeof(str));

  printf("pc[0]: %c", pc[0]);
  // pc[0] = 'S'; // 포인터를 배열 형태로 사용해서 대입 불가
  str[0] = 'S';

  // scanf("%s",pc);
  scanf("%s", str);

  printf("pc : %s\n", pc);
  printf("str : %s\n", str);
  return 0;
}