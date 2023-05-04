// deQue.h
#pragma once
typedef char element; // 데크 원소의 자료형을 char로 정의

typedef struct DQNode
{
  element data;
  struct DQNode *llink;
  struct DQNode *Rlink;
} DQNode;

typedef struct
{
  DQNode *front, *rear;
} DQueType;

DQueType *createDQue(void);
int isDeQEmpty(DQueType *DQ);
void insertFront(DQueType *DQ, element item);
void insertRear(DQueType *DQ, element item);
element deleteFront(DQueType *DQ);
element deleteRear(DQueType *DQ);
element peekFront(DQueType *DQ);
element peekRear(DQueType *DQ);
void printDQ(DQueType *DQ);
