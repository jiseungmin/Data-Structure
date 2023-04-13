// StackS.h
// 순차 자료구조를 이용해 순차 스택 구현하기
#pragma once
#define STACK_SIZE 100

typedef int element; // 스택 원소의 자료형을 int로 정의
element stack[STACK_SIZE]; // 1차원 배열 스택선언

int isStackEmpty(void);
int isStackFull(void);
void push(element item);
element pop(void);
element peek(void);
void printStack(void);

