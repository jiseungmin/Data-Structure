#include <stdio.h>
#include <string.h>
#include "InsertLinkedList.h"

int main(void)
{
  linkedList_h *L;
  L = createLinkedList_h();
  printf("(1) 공백 리스트 생성하기 \n");
  printList(L);

  printf("\n (2) 리스트에 [수] 노드 삽입하기! \n");
  insertFirstNode(L, "수");
  printList(L);

  printf("\n (3) 리스트에 마지막에 [금] 노드 삽입하기! \n");
  insertLastNode(L, "금");
  printList(L);

  printf("\n (4) 리스트 첫 번째에 [월] 노드 삽입하기! \n");
  insertFirstNode(L, "월");
  printList(L);

  printf("\n (5)수요일 뒤에[목] 노드 삽입하기! \n");
  listNode *current = L->head;
  while (current != NULL)
  {
    if (strcmp(current->data, "수") == 0)
    {
      insertMiddleNode(L, current, "목");
      break;
    }
    current = current->link;
  }
  printList(L);

  printf("\n (6) 리스트공간 해체하여 공백리스트로 만들기\n");
  freeLinkedList_h(L);
  printList(L);

  return 0;
}