#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  int count_char = 0, count_digit = 0;
  int i;

  printf("Enter the string: ");
  scanf("%s", str);

  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') {
      count_char++;
    } else if (str[i] >= '0' && str[i] <= '9') {
      count_digit++;
    }
  }

  printf("The number of characters in str1 is %d\n", count_char);
  printf("The number of digits in str1 is %d\n", count_digit);

  int palindrome = 1;
  int n = strlen(str);
  for (i = 0; i < n / 2; i++) {
    if (str[i] != str[n - i - 1]) {
      palindrome = 0;
      break;
    }
  }

  if (palindrome == 1) {
    printf("%s is a palindrome\n", str);
  } else {
    printf("%s is not a palindrome\n", str);
  }

  return 0;
}
