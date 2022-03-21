#include <stdio.h>
#include "stack.h"

int main(void){
  Node *root = newNode(1);
  pushNode(2, &root);
  pushNode(3, &root);  int data = peekNode(root);
  printf("Value of peeked data: %i\n", data);
  data = popNode(&root);
  printf("Value of popped data: %i\n", data);
  printf("Is stack empty? %s\n", isEmpty(&root)? "True" : "False");
  data = popNode(&root);
  printf("Value of popped data: %i\n", data);
  printf("Is stack empty? %s\n", isEmpty(&root)? "True" : "False");
  if (freeStack(&root)){
      printf("Stack successfully cleared\n");
    }else {
    perror("Error freeing stack: ");
  }
  printf("Is stack empty? %s\n", isEmpty(&root)? "True" : "False");
}
