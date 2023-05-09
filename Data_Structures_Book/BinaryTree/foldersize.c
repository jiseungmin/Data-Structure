#include <stdlib.h>
#include "foldersize.h"

// size를 루트 노드의 데이터 필드로 하여 왼쪽과 오른쪽 서브 트리를 연결하는 연산
treeNode *makeRootNode(int size, treeNode *left, treeNode *right)
{
  treeNode *root = malloc(sizeof(treeNode));
  root->size = size;
  root->left = left;
  root->right = right;
  return root;
}

int postorder_FolderSize(treeNode *root)
{
  if (root)
  {
    postorder_FolderSize(root->left);
    postorder_FolderSize(root->right);
    foldersize += root->size;
  }
  return foldersize;
}