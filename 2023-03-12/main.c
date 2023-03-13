#include <stdio.h>
#include "func.h"
#include <math.h>

int main () {
  int x = 10;
  printf("In main, value of x is: %d\n", x);
  x = func(x);
  printf("After func, x is now %d\n", x);
  printf("%f\n", pow(2.0, 3.0));
}
