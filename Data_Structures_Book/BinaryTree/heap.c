#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

// 공백 히프를 생성하는 연산
heapType *createHeap(void){
    heapType* h = (heapType*)malloc(sizeof(heapType));
    h->heap_size = 0;
    return h;
}

// 히프에 item을 삽입하는 연산
void insertHeap(heapType* h, int item){
    int i;
    h->heap_size = h->heap_size+1;
    i = h->heap_size;
    while ((i!=1)&&(item>h->heap[i/2])){
        h->heap[i]=h->heap[i/2];
        i/=2;
    }
    h->heap[i] = item;
}

int deleteHeap(heapType* h){
    int parent, child;
    int item, temp;
    item = h->heap[1];
    temp = h->heap[h->heap_size];
    h->heap_size = h->heap_size-1;
    parent =1;
    child = 2;
    while (child <= h->heap_size){
        if((child<h->heap_size) && (h->heap[child]<h->heap[child+1])) child ++;
        if(temp >= h->heap[child]) break;
        else{
            h->heap[parent] = h ->heap[child];
            parent =child;
            child = child * 2;
        }
    }
    h->heap[parent] = temp;
    return item;
}

void printHeap(heapType *h){
    int i ;
    printf("Heap :");
    for(i=1; i<=h->heap_size; i++){
        printf("[%d] ",h->heap[i]);
    }
}

