#include <stdio.h>
int main(void) {
  printf("hello world\n");
  printf("What is your name? \n");
  char name[20];
  scanf("%s", name);
  printf("hello, it's %s.\n", name);
  return 0;
}
