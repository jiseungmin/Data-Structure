// deQue.c
#include <stdio.h>
#include <stdlib.h>
#include "deQue.h"

// 공백 테크를 생성하는 연산
DQueType *createDQue(void)
{
  DQueType *DQ;
  DQ = (DQueType *)malloc(sizeof(DQueType));
  DQ->front = NULL;
  DQ->rear = NULL;
  return DQ;
}

// 테크가 공백 상태인지 검사하는 연산
int isDeQEmpty(DQueType *DQ)
{
  if (DQ->front == NULL)
    return 1;
  else
    return 0;
}

// 테크의 front 앞으로 원소를 삽입하는 연산
void insertFront(DQueType *DQ, element item)
{
  DQNode *newnode = (DQNode *)malloc(sizeof(DQNode));
  newnode->data = item;
  if (isDeQEmpty(DQ))
  { // 데크가 공백 상태인 경우
    DQ->front = newnode;
    DQ->rear = newnode;
    newnode->Rlink = NULL;
    newnode->llink = NULL;
  }
  else
  {
    DQ->front->llink = newnode;
    newnode->Rlink = DQ->front;
    newnode->llink = NULL;
    DQ->front = newnode;
  }
}

// 테크의 Rear 앞으로 원소를 삽입하는 연산
void insertRear(DQueType *DQ, element item)
{
  DQNode *newnode = (DQNode *)malloc(sizeof(DQNode));
  newnode->data = item;
  if (isDeQEmpty(DQ))
  { // 데크가 공백 상태인 경우
    DQ->front = newnode;
    DQ->rear = newnode;
    newnode->Rlink = NULL;
    newnode->llink = NULL;
  }
  else
  {
    DQ->front->llink = newnode;
    newnode->Rlink = NULL;
    newnode->llink = DQ->rear;
    DQ->rear = newnode;
  }
}

// 테크의 front 노드를 삭제하고 반환하는 연산
element deleteFront(DQueType *DQ)
{
  DQNode *old = DQ->front;
  element item;
  if (isDeQEmpty(DQ))
  {
    printf("\n Linked deQue is empty \n");
    return;
  }
  else
  {
    item = old->data;
    if (DQ->front->Rlink == NULL)
    {
      DQ->front = NULL;
      DQ->rear = NULL;
    }
    else
    {
      DQ->front = DQ->front->Rlink;
      DQ->front->llink = NULL;
    }
    free(old);
    return item;
  }
}

// 테크의 rear 노드를 삭제하고 반환하는 연산
element deleteRear(DQueType *DQ)
{
  DQNode *old = DQ->rear;
  element item;
  if (isDeQEmpty(DQ))
  {
    printf("\n Linked deQue is empty \n");
    return;
  }
  else
  {
    item = old->data;
    if (DQ->front->Rlink == NULL)
    {
      DQ->front = NULL;
      DQ->rear = NULL;
    }
    else
    {
      DQ->rear = DQ->rear->llink;
      DQ->rear->Rlink = NULL;
    }
    free(old);
    return item;
  }
}

// 데크 front 노드의 데이터 필드를 변환하는 연산
element peekFront(DQueType *DQ)
{
  element item;
  if (isDeQEmpty(DQ))
  {
    printf("\n Linked deQue is empty \n");
    return;
  }
  else
  {
    item = DQ->front->data;
    return item;
  }
}

// 데크 rear 노드의 데이터 필드를 변환하는 연산
element peekFront(DQueType *DQ)
{
  element item;
  if (isDeQEmpty(DQ))
  {
    printf("\n Linked deQue is empty \n");
    return;
  }
  else
  {
    item = DQ->rear->data;
    return item;
  }
}

// 데크의 front 노드부터 rear 노드까지 출력하는 연산
void printDQ(DQueType *DQ)
{
  DQNode *temp = DQ->front;
  pritnf("DeQue : [");
  while (temp)
  {
    printf("%3c", temp->data);
    temp = temp->Rlink;
  }
  printf("]");
}