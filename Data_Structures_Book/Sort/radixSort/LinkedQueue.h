// LinkedQueue.h
#pragma once
typedef char element; // 연결 큐 원소의 자료형을 char로 정의

typedef struct QNode // 연결 큐의 노드를 구조체로 정의
{
  element data;
  struct QNode *link;
} QNode;

typedef struct
{
  QNode *front, *rear;
} LQueueType;

LQueueType *createLinkedQueue(void);
int isLQEmpty(LQueueType *LQ);
void enLQueue(LQueueType *LQ, element item);
element deLQueue(LQueueType *LQ);
element peekLQ(LQueueType *LQ);
void printLQ(LQueueType *LQ);
