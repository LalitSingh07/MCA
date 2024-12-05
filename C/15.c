#include <stdio.h>

int main() {
  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

 
number % 2 == 0 ? printf("number is Even") : printf("number is Odd");

  return 0;
}