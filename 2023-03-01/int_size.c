#include <stdio.h>
#include <limits.h> // Inlcudes all of the limits that we will need to check int size

int main () {
  printf("Size of int according to sizeof(): %ld \n", sizeof(int));
  printf("Size of int according to limits.h: %d \n", INT_MAX);
}
