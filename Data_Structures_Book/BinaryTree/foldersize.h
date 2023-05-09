#pragma once

int foldersize;

typedef struct treeNode
{
  int size;
  struct treeNode *left;
  struct treeNode *right;
} treeNode;

treeNode *makeRootNode(int size, treeNode *left, treeNode *right);
int postorder_FolderSize(treeNode *root);
