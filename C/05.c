#include <stdio.h>

int main() {
 
  int ascii_code;
  printf("Enter the ASCII code: ");
  scanf("%d", &ascii_code);

 
  char character = (char)ascii_code;
  printf("The character associated with the ASCII code %d is %c\n", ascii_code, character);

  return 0;
}
