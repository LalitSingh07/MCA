#include <stdio.h>

int main() {
  int a, b;

  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);

 
  a = a+b;
  b = a-b;
  a =a-b;

  printf("After swapping, the two numbers are: %d and %d\n", a, b);

  return 0;
}
