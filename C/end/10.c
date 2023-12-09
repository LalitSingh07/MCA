#include <stdio.h>

void count(char string[]) {
  int char_count = 0, digit_count = 0,flag=1;
  for (int i = 0; string[i] != '\0'; i++) {
    if (string[i] >= 'a' && string[i] <= 'z' || string[i] >= 'A' && string[i] <= 'Z') {
      char_count++;
    } else if (string[i] >= '0' && string[i] <= '9') {
      digit_count++;
    }
  }
  printf("the number of alphabet is %d\n",char_count);
  printf("the number of digit is %d\n",digit_count);
  int length = strlen(string);
  for (int i = 0; i < length / 2; i++) {
    if (string[i] != string[length - 1 - i]) {
      flag =0;
      
    }
  }

  if(flag){
    printf("string is palindrome\n");

  }else{
    printf("string is not palindrome\n");
  }
}



int main() {
  char string[100];
  printf("Enter the string: ");
  scanf("%s", &string);

count(string);
 

  return 0;
}
