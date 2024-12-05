#include <stdio.h>

int main() {
 

  int int_a = 5;
  float float_a = 5.6;
  double double_a = 8.888;
  char char_a = 'a'; 


  printf("Integer %d is size of %zu bytes\n", int_a, sizeof(int_a));
  printf("Float %f is size of %zu bytes\n", float_a, sizeof(float_a));
  printf("Double %lf is size of %zu bytes\n", double_a, sizeof(double_a));
  printf("Char %c is size of %zu bytes\n", char_a, sizeof(char_a));

  return 0;
}
