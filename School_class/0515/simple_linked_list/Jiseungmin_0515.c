#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int value;
  struct Node *pNext;
} Node;

Node *head = NULL;

void printListNode();
void unInitList();
void deleteNode();
void reverseNode();
void insertNodeOrder();

int main(void)
{
  int choice;

  while (1)
  {
    printf("*** 메뉴 선택 *** \n");
    printf("1. 노드 삽입\n");
    printf("2. 노드 출력\n");
    printf("3. 노드 삭제\n");
    printf("4. 역순 연걸\n");
    printf("0. 종료\n");
    printf("메뉴 선택: \b\b");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      insertNodeOrder();
      break;

    case 2:
      printListNode();
      break;

    case 3:
      deleteNode();
      break;

    case 4:
      reverseNode();
      break;

    case 0:
      unInitList();
      exit(0);
    }
  }
  return 0;
}

void insertNodeOrder()
{
  Node *newNode, *curNode = NULL, *prevNode = NULL;
  newNode = (Node *)malloc(sizeof(Node));

  printf("\n정수 입력 :");
  scanf("%d", &newNode->value);
  newNode->pNext = NULL;

  if (head == NULL)
  {
    head = newNode;
    printf("리스트가 비어 있어 첫 노드 추가\n");
    return;
  }

  if (head->value > newNode->value)
  {
    newNode->pNext = head;
    head = newNode;
    printf("가장 작은 값 입력으로 맨 앞 삽입\n");
    return;
  }

  curNode = prevNode = head;
  while (curNode->pNext != NULL)
  {
    curNode = curNode->pNext;

    if (curNode->value > newNode->value)
    {
      newNode->pNext = curNode;
      prevNode->pNext = newNode;
      printf("정렬된 순서로 노드 삽입(오름차순)\n");
      return;
    }
    prevNode = prevNode->pNext;
  }
  curNode->pNext = newNode;
  printf("가장 큰 값 입력으로 마지막 노드로 삽입\n");
}

void reverseNode()
{
  Node *prevNode = NULL, *curNode = NULL, *nextNode = NULL;
  if (head == NULL || head->pNext == NULL)
  {
    return;
  }

  prevNode = head;
  curNode = prevNode->pNext;
  prevNode->pNext = NULL;

  while (curNode->pNext != NULL)
  {
    nextNode = curNode->pNext;
    curNode->pNext = prevNode;
    prevNode = curNode;
    curNode = nextNode;
  }
  curNode->pNext = prevNode;
  head = curNode;
  printf("\n\n\t\t리스트 역순 연결했습니다..\n");
}

void deleteNode()
{
  int num;
  Node *delNode = NULL, *curNode = NULL;

  if (head == NULL)
  {
    printf("\n\n\t\t연결리스트가 비어 있습니다.\n");
    return;
  }

  printf("\n삭제하고자 하는 수 입력");
  scanf("%d", &num);

  if (head->value == num)
  {
    delNode = head;
    head = head->pNext;
    free(delNode);
    printf("\n\n\t\t첫 번째 노드 %d삭제\n", num);
    return;
  }

  curNode = head;
  while (curNode->pNext != NULL)
  {
    delNode = curNode->pNext;
    if (delNode->value == num)
    {
      curNode->pNext = delNode->pNext;
      free(delNode);
      printf("\n\n\t\t중간 노드 삭제된 값 : %d ", num);
    }
    if (curNode->pNext != NULL)
    {
      curNode = curNode->pNext;
    }
  }
}

void unInitList()
{
  Node *delNode;
  if (head == NULL)
  {
    printf("\n\n\t\t연결 리스트가 비어 있습니다. \n");
    return;
  }

  while (head != NULL)
  {
    delNode = head;
    head = head->pNext;
    free(delNode);
    printf("동적 메모리 노드 해제\n");
  }
}

void printListNode()
{
  Node *curNode;
  if (head == NULL)
  {
    printf("\n\n\t\t연결 리스트가 비어 있습니다.\n");
    return;
  }

  curNode = head;

  while (curNode->pNext != NULL)
  {
    printf("%d -> ", curNode->value);
    curNode = curNode->pNext;
  }
  printf("%d\n", curNode->value);
}