#ifndef STACK_H
#define STACK_H

#ifdef __cplusplus
extern "C" {
#endif

  typedef struct Node{
    int data;
    struct Node* next;
  } Node;

  
  Node* newNode(int data);

  int pushNode(int data, Node** node);

  int popNode(Node** node);

  int peekNode(Node* node);

  int isEmpty(Node** node);

  int freeStack(Node** node);
  
#ifdef __cplusplus
}
#endif
#endif // STACK_H
