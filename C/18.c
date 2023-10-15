#include <stdio.h>

int main() {
  int number1, number2, number3, largest;

  printf("Enter three numbers: ");
  scanf("%d %d %d", &number1, &number2, &number3);

   number1 > number2 && number1>number3?printf("%d is largest",number1):number2>number1 && number2>number3?printf("%d is largest",number2):printf("%d is largest",number3);


  return 0;
}
