#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

Node* newNode(int data){
  Node* new = (Node*)malloc(sizeof(Node*));
  new->data = data;
  new->next = NULL;
  printf("New node created with the value of: %i\n", data);
  return new;
}

int isEmpty(Node** node){
  if((*node) == NULL){
    return 1;
  }
  return 0;
}

int pushNode(int data, Node** node){
  Node* new = newNode(data);
  new->next = *node;
  *node = new;
  printf("Pushed to stack!\n");
  return 1;
}

int popNode(Node** node){
  if (isEmpty(node)){
    return 0;
  }
  Node* temp = *node;
  int data = temp->data;
  *node = (*node)->next;
  free(temp);
  return data;
}

int peekNode(Node* node){
  if (isEmpty(&node)){
    return 0;
  }
  return node->data;
}

int freeStack(Node** node){
  while(!isEmpty(node)){
    Node* temp = *node;
    *node = (*node)->next;
    free(temp);
  }
  return 1;
}
