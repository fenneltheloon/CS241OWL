#include <stdio.h>

int main (int argc, char ** argv ) {
  // argc = 2 -> argv[0] is program name and argv[1] is argument.
  if (argc != 2){
    return 0;
  }
  printf("%s\n", argv[1]);

  int array[10] = {0};

  char * argv_3 = *(argv+3);
}
