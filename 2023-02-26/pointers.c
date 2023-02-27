#include <stdio.h>

int main () {
  int x = 10; // Value of x is 10, x also has a memory address
  // Take memory address of a variable with '&'

  int * ptx = &x;

  printf(" Value of ptx is: %p\n", ptx);

  int y = *ptx;
  printf("Value of y is: %d\n", y);

  *ptx = 15;

  printf("Value of *ptx is now 15\n");

  printf("x is now: %d, y is now: %d\n", x, y);

  ptx = &y;

  ptx = (int *) 10;

  int z = x + *ptx;
}
