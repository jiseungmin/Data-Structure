#include <stdio.h>
#include <stdlib.h>

typedef struct tree {
    int value;
    struct tree* left;
    struct tree* right;
}tree;

tree* addNode(tree* t, int data);
void display(tree* t);
tree* getMax(tree* t);
tree* getMix(tree* t);
tree* removeNode(tree* t, int target);
tree* getFindNode(tree* t, int target);

tree* getMax(tree* t){
    if(t == NULL)
        return NULL;
    
    if(t->right == NULL)
        return t;
    else
        return getMax(t->right);
}

tree* getMin(tree* t){
    if (t == NULL)
        return NULL;
    if(t->left == NULL)
        return t;
    return getMin(t->left);
}

tree* removeNode(tree* t, int target){
    tree* temp = NULL;
    if(t==NULL)
        return NULL;
    
    if (t->value == target) // 삭제할 노드를 찾는다.
    {
        if(t->left == NULL && t->right == NULL){
            free(t); // 노드 삭제
            printf("\n\n\t\tcase 1. 삭제할 노드의 자식이 없는 경우\n");
            return NULL;
        }
        else if (t->left == NULL) //2. 오른쪽 자식만 있는 경우
        {
            temp = t->right;
            free(t);
            printf("\n\n\t\tcase 2. 삭제할 노드의 자식이 한 개인 경우(오른쪽 자식만 존재)\n");
            return temp;
        }
        else if (t->right == NULL){
            temp = t->left;
            free(t);
            printf("\n\n\t\tcase 2. 삭제할 노드의 자식이 한 개인 경우(왼쪽 자식 존재)\n");
            return temp;
        }
        else{
            printf("\n\n\t\tcase 3. 삭제할 노드의 자식이 두 개인 경우\n");
            printf("\t\t노드 삭제 이뤄지는 것이 아니라, 왼쪽 자식 중에 최대값이 삭제할 노드의 값으로 대체된다.\n");

            temp = getMin(t->right); //오른쪽 자식 중에서 최솟값을 구한다.
            t->value = temp -> value; // 오른쪽 자식 중에서 최솟값을 삭제할 노드의 값으로 대체
            t->right = removeNode(t->right, temp->value);
        }
    }else if (t->value > target)
    {
        t->left = removeNode(t->left, target);
    }else
    {
        t->right = removeNode(t->right, target);
    }
    return t;
}

tree* getFindNode(tree* t, int target){
    if(t== NULL)
        return NULL;
    
    if (t->value == target)
        return t;
    else if (t->value < target)
        return getFindNode(t->right, target);
    else
        return getFindNode(t->left, target);
}

tree* addNode(tree* t, int data){
    if(t==NULL){
        t = (tree*)malloc(sizeof(tree));
        t->value = data;
        t->left =NULL;
        t->right = NULL;
    }
    else if (t->value > data)
        t->left = addNode(t->left, data);
    else if (t->value < data)
        t->right = addNode(t->right, data);
    
    return t;
}

void display(tree* t){
    if (t!=NULL){
        display(t->left);
        printf("%d ", t->value);
        display(t->right);
    }
}

int main(){
    tree* root = NULL;
    tree* findNode = NULL;
    int choice, data;

    while (1){
        system("cls");
        printf("\n\n\t\t *** Binary Search Tree(BST) ** \n\n");
        printf("1. 노드 추가\n");
        printf("2. 노드 제거\n");
        printf("3. 노드 검색\n");
        printf("4. 노드 출력\n");
        printf("5. 최댓값\n");
        printf("6. 최솟값\n");
        printf("0. 프로그램 종료\n");
        printf("메뉴 선택 : []\b\b");
        scanf("%d", &choice);
        while (getchar() != '\n')
        switch (choice){
            case 1:
                printf("\n\n삽입 할 정수 입력 : ");
                scanf("%d", &data);
                while (getchar() != '\n');
                root = addNode(root,data);
                break;
            case 2:
                printf("\n\n삭제 할 정수 입력 : ");
                scanf("%d", &data);
                while(getchar() != '\n');
                root = removeNode(root,data);
                break;
            case 3:
                printf("\n\n검색 할 정수 입력 : ");
                scanf("%d", &data);
                while (getchar() != '\n');
                findNode = getFindNode(root,data);
                if(findNode == NULL)
                    printf("\n\n\t\t검색한 노드는 존재하지 않습니다.\n");
                else
                    printf("\n\n\t\t검색한 노드의 값은 %d입니다. \n", findNode->value);
                break;
            case 4 :
                printf("\n\nBST display(오름차순 정렬 | 왼 - 부 - 오) :");
                display(root);
                break;
            case 5 :
                findNode = getMax(root); // 최댓값 노드를 구해 리턴
                printf("\n\n\t\t최댓값은 %d입니다.\n", findNode->value);
                break;
            case 6 :
                findNode = getMin(root); // 최댓값 노드를 구해 리턴
                printf("\n\n\t\t최솟값은 %d입니다.\n", findNode->value);
                break;
            case 0 :
                exit(0);
            }
            printf("\n\n\t\t");
            system("pause");
        }
    return 0;
}