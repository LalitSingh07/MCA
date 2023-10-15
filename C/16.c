#include <stdio.h>

int main() {
  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

 number > 0 ? printf("number is Positive") : number < 0 ? printf("number is Negative"): printf("number is Zero");

  return 0;
}