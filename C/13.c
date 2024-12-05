#include <stdio.h>

int main() {

  int a = 111;
  float b = 20.5;


  float implicit_sum = a + b;
  float implicit_sub = a - b; 
  float implicit_mul = a * b; 
  float implicit_div = a / b;


  int explicit_sum = (int) (a + b); 
  int explicit_sub = (int) (a - b); 
  int explicit_mul = (int) (a * b); 
  int explicit_div= (int) (a / b); 

printf("Implicit type casting\n");
  
  printf("implicit_sum = %f\n", implicit_sum); 
  printf("implicit_sub = %f\n", implicit_sub); 
  printf("implicit_mul = %f\n", implicit_mul); 
  printf("implicit_div = %f\n", implicit_div); 

printf("Explicit type casting\n");

  printf("explicit_sum = %d\n", explicit_sum); 
  printf("explicit_sub = %d\n", explicit_sub); 
  printf("explicit_sub= %d\n", explicit_mul); 
  printf("explicit_sub= %d\n", explicit_div); 

  return 0;
}
