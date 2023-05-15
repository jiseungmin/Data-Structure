#pragma once
#define STACK_SIZE 100

typedef int element;
element stack[STACK_SIZE];

int isStackEmpty();
int istStackFull();
void push(element item);
element pop();
element peek();
void printStack();
