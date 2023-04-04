#include "LinkedPoly.h"

void main(void){
    ListHead *A, *B, *C;

    // 공백 다항식 리스트 A,B,C 생성
    A = createLinkedList();
    B = createLinkedList();
    C = createLinkedList();

    appendTerm(A,4,3); // 다항식 리스트 A에 4x^3노드 추가
    appendTerm(A,3,2); // 다항식 리스트 A에 3x^2노드 추가
    appendTerm(A,5,1); // 다항식 리스트 A에 6x^1노드 추가
    printf("\n A(x) = ");

    printPoly(A); // 다항식 리스트 A 출력
    appendTerm(B,3,4); // 다항식 리스트 B에 3x^4노드 추가
    appendTerm(B,1,3);// 다항식 리스트 B에 1x^3노드 추가
    appendTerm(B,2,1);// 다항식 리스트 B에 2x^1노드 추가
    appendTerm(B,1,0);// 다항식 리스트 B에 1x^0노드 추가

    addPoly(A,B,C); // 다항 식 덧셈 연산 수행
    printf("\n C(X) =") ;
    printPoly(C); // 다항식 리스트 C 출력

    getchar(); return 0;
    
}