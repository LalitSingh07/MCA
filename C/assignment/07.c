#include <stdio.h>
 void rev(num);
 void rev(num){
int rev = 0, rem;
  while (num != 0) {
    rem = num % 10;
    rev = rev * 10 + rem;
    num /= 10;
  }

  printf("Reversed number: %d\n", rev);

 }
int main() {
  int num;

  printf("Enter an integer: ");
  scanf("%d", &num);

  rev(num);

  return 0;
}
