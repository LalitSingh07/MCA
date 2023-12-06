#include <stdio.h>

int count_characters_digits(char string[]) {
  int char_count = 0, digit_count = 0;
  for (int i = 0; string[i] != '\0'; i++) {
    if (string[i] >= 'a' && string[i] <= 'z' || string[i] >= 'A' && string[i] <= 'Z') {
      char_count++;
    } else if (string[i] >= '0' && string[i] <= '9') {
      digit_count++;
    }
  }
  return char_count + digit_count;
}

int is_palindrome(char string[]) {
  int length = strlen(string);
  for (int i = 0; i < length / 2; i++) {
    if (string[i] != string[length - 1 - i]) {
      return 0;
    }
  }
  return 1;
}

int main() {
  char string[100];
  printf("Enter the string: ");
  scanf("%s", string);

  int count = count_characters_digits(string);
  printf("The number of characters and digits in the string is: %d\n", count);

  int is_pal = is_palindrome(string);
  if (is_pal) {
    printf("%s is a palindrome.\n", string);
  } else {
    printf("%s is not a palindrome.\n", string);
  }

  return 0;
}
