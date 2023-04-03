/*
  컴퓨터 공학부 지승민
  파일명 : jiseungmin_0403_04.c
  제목 : 구조체를 이용하여 두 변수의 값을 교환
*/
#include <stdio.h>

struct vision
{
  double left;
  double right;
};

struct vision exchange(struct vision robot);

int main(void)
{
  struct vision robot;
  printf(" Input vision: ");
  scanf("%lf%lf", &(robot.left), &(robot.right));
  robot = exchange(robot);
  printf("Changed Vision : %.1lf %.1lf\n", robot.left, robot.right);
  return 0;
}

struct vision exchange(struct vision robot)
{
  double temp;
  temp = robot.left;
  robot.left = robot.right;
  robot.right = temp;
  return robot;
}