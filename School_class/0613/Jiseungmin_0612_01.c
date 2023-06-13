#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode{
    struct TreeNode* left;
    int data;
    struct TreeNode* right;
}TreeNode;

TreeNode n7 = {NULL,22,NULL};
TreeNode n6 = {NULL,95,NULL};
TreeNode n5 = {&n7,35,NULL};
TreeNode n4 = {NULL,5,NULL};
TreeNode n3 = {&n5,93,&n6};
TreeNode n2 = {&n4,15,NULL};
TreeNode n1 = {&n2,17,&n3};
TreeNode* root = &n1;

//전위 순회 = 루트, 왼, 오
void preorder(TreeNode* root){
    if(root != NULL){
        printf("[%d] ", root->data); // 루트방문
        preorder(root->left); // 순환 - 재귀함수, 왼쪽 노드를 루트로 전달해서 다시 전위 순회
        preorder(root->right); // 왼쪽 서브트리 모두 방문 후 오른쪽 서브트리 방문
    }
}

//중위 순회 = 왼, 루트, 오
void inorder(TreeNode* root){
    if(root != NULL){
        inorder(root->left); // 왼쪽 서브트리부터 방문
        printf("[%d] ",root->data); // 루트 방문
        inorder(root->right); // 오른쪽 서브 트리 방문
    }
}

// 후위 순회 = 왼, 오, 루트
void postorder(TreeNode* root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        printf("[%d] ", root->data);
    }
}

int main(void){
    printf("Prefix : ");
    preorder(root);
    printf("\n Infix : ");
    inorder(root);
    printf("\nPostfix : ");
    postorder(root);
}