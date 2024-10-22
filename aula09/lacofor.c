#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
  int i = atof(argv[1]);

  for (int i = 1; i < 11; i++) {
    printf("%i, ",i);
  }
  printf("\n\n");
 
 return 0;
}