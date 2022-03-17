/* This is my implementation of a stack using linked lists
 * I used https://www.geeksforgeeks.org/stack-data-structure-introduction-program/
 * for inspiration.
 */
#include <stdbool.h>

typedef struct StackNodes {
  int data;
  struct StackNodes *next;
}StackNode;

StackNode* newNode(int data);

bool isEmpty(StackNode *root);

void push(StackNode* root, int data);

int pop(StackNode* root);

int peek(StackNode *root);
