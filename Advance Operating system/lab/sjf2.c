#include <stdio.h>

void main() {
  int n = 9, div = 0;
  div = n / 0; // Runtime error
  printf("result = %d", div);
}
