#include <stdio.h>

int main () {
  int x = 10;
  int * x_point = &x;
  x_point = (int *) 12;
  int y = *x_point;
  printf("%p\n", x_point);
  printf("%d\n", y);
}