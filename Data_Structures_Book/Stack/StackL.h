//StackL.h
#pragma once

typedef char element; // 스택 원소의 자료형을 int로 정의

typedef struct stackNode // 스택의 노드를 구조체로 정의
{
    element data;
    struct stackNode* link;
}stackNode;

stackNode* top; // 스택의 top 노드를 지정하기 위해 포인터 top 선언

int isStackEmpty(void);
void push(element item);
element pop(void);
element peek(void);
void printStack(void);