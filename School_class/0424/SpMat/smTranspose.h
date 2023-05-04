// 컴퓨터 공학부
// 제목 : 희소행렬의 전치 연산하기

#pragma once

typedef struct
{
  int row;
  int col;
  int value;
} term;

void smTranspose(term a[], term b[]);