#include <stdio.h>

void toBinary(int n) {
  if (n == 0) {
    return;
  }
  toBinary(n / 2);
  printf("%d", n % 2);
}

int main() {
  int n;
  printf("Enter a decimal number: ");
  scanf("%d", &n);

  toBinary(n);

  return 0;
}
