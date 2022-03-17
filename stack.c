#ifndef malloc
  #include <stdlib.h>
  #include <stdbool.h>
  #include <stdio.h>
#endif

typedef struct StackNodes {
  int data;
  struct StackNodes *below;
}StackNode;

StackNode* newNode(int data){
  StackNode* node = (StackNode*)malloc(sizeof(StackNode*));
  node->data = data;
  node->below = NULL;
  printf("New Node Created\n");
  return node;
}

bool isEmpty(StackNode* root){
  return !root;
}

void push(StackNode** root, int data){
  StackNode *node = newNode(data);
  node->below = *root;
  *root = node;
  printf("Pushed new node with value of: %d\n", node->data);
}

int pop(StackNode** root){
  if(isEmpty(*root)){
    return 0;
  }
  StackNode *temp = *root;
  *root = (*root)->below;
  int popped = temp->data;
  free(temp);
  return popped;
  printf("Popped the top node off!");
}

int peek(StackNode* root){
  if(isEmpty(root)){
    return 0;
  }
  return root->data;
}
