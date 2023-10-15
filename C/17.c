#include <stdio.h>

int main() {
  int number1, number2;

  
  printf("Enter two numbers: ");
  scanf("%d %d", &number1, &number2);

  number1 > number2 ? printf("%d is greater",number1)  : printf("%d is greater",number2);
  

  return 0;
}