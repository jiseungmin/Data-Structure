#include <stdio.h>
#include <string.h>
#include "StackL.h"
#include "testPair.h"

// 수식의 괄호를 검사하는 연산
int testPair(char* exp){
    char symbol, open_pair;
    // char형 포인터 매개변수로 받은 수식 exp의 길이를 계산하여 length 변수에 저장
    int i, lenght=strlen(exp);
    top = NULL;

    for(i=0; i<lenght; i++){
        symbol = exp[i];
        switch (symbol){
            case '(' :
            case '[':
            case '{':
                push(symbol); break;
            case ')':
            case ']':
            case '}':
                if (isStackEmpty()) return 0;
            else {
                // 스택에서 마지막으로 읽은 괄호를 꺼냄
                open_pair = pop();
                // 괄호 쌍이 맞는지 검사
                if ((open_pair == '(' && symbol != ')') ||
                    (open_pair == '[' && symbol != ']') ||
                    (open_pair == '{' && symbol != '}'))
                    return 0;
                else break;
            }
        }
    }
    if (top == NULL) return 1;
    else return 0;
}