#include <stdio.h>

int main() {

  int a = 10;
  char b = 'A';
  printf("The ASCII value of a = %d is %d.\n", a,a); // 48
  printf("The ASCII value of b = %c is %d.\n",b, b); // 65
  int c = a + b;
  printf("The sum of a and b is %d.\n", c); // 73

  return 0;
}
//This program shows that int and char are both primitive data types in C that store integers. However, they differ in size and range of values they can store. An int can store a 32-bit integer, while a char can store an 8-bit integer.