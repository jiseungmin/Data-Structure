//ex6_2.c
#include "cQueueS.h"

int main(void){
  QueueType *cQ = createCQueue();
  element data;
  printf("\n """" 원형 큐 연산 """"\n");
  printf("\n 삽입 A>>"); enCQueue(cQ,'A'); printCQ(cQ);
  printf("\n 삽입 B>>"); enCQueue(cQ,'B'); printCQ(cQ);
  printf("\n 삽입 C>>"); enCQueue(cQ,'C'); printCQ(cQ);
  data = peekQ(cQ); printf(" peek item : %c \n", data);
  printf("\n 삭제 >>"); data = deCQueue(cQ); printCQ(cQ);
  printf("\t삭제 데이터 : %c",data);
  printf("\n 삭제 >>"); data = deCQueue(cQ); printCQ(cQ);
  printf("\t삭제 데이터 : %c",data);
  printf("\n 삭제 >>"); data = deCQueue(cQ); printCQ(cQ);
  printf("\t\t삭제 데이터 : %c",data);

  printf("\n 삽입 D>>"); enCQueue(cQ, 'D'); printCQ(cQ);
  printf("\n 삽입 E>>"); enCQueue(cQ, 'E'); printCQ(cQ);

  getchar();
  return 0;
}