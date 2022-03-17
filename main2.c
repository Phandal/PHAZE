#include <stdio.h>
#include "stack.h"

int main(void){
  StackNode *root = newNode(1);
  push(root, 2);
  int data = peek(root);
  printf("Value of peeked data: %d\n", data);
  data = pop(root);
  printf("Value of popped data: %d\n", data);
  printf("Is empty: %s\n",isEmpty(root) ? "True" : "False");
  pop(root);
  printf("Is empty: %s\n",isEmpty(root) ? "True" : "False");
}
