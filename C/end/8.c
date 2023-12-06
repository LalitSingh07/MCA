#include <stdio.h>

int sum(int n) {
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
  int n;
  printf("Enter an integer: ");
  scanf("%d", &n);
  
  printf("The sum of the digits of %d is %d.\n", n, sum(n));
  return 0;
}
