#include <stdio.h>

int main() {
  char ch;
  int count;

  printf("Enter a character: ");
  scanf("%c", &ch);

  if (ch >= 'a' && ch <= 'z') {
    count =0;
  }
  else if(ch >= 'A' && ch <= 'Z'){
    count = 1;
  }
  else if(ch >= '0' && ch <= '9'){
    count = 2;
  }
   else {
    count =3;
  }
switch (count)
{
case 0:
    printf("lowerCase Character");
    break;
case 1:
    printf("UpperCase Character");
    break;
case 2:
    printf("number");
    break;
case 3:
    printf("Special Symbol");
    break;

default:
    break;
}
  return 0;
}
