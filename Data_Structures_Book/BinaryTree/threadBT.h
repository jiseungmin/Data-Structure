#pragma once
typedef struct treeThNode
{
  char data;
  struct treeThNode *left;
  struct treeThNode *right;
  int isThreadRight;
} treeThNode;

treeThNode *makeRootThNode(char data, treeThNode *left, treeThNode *right, int isThreadRight);
treeThNode *findThreadSuccessor(treeThNode *p);
void threadInorder(treeThNode *root);
