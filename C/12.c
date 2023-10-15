#include <stdio.h>

int main() {
  int i = 5;

  printf("pos-increment\n");
  printf("i++ = %d\n", i++); // 5
  printf("i = %d\n", i); // 6
  printf("Pre-increment\n");
 
  printf("++i = %d\n", ++i); // 7
  printf("i = %d\n", i); // 7
printf("Post-decrement\n");
  
  printf("i-- = %d\n", i--); // 7
  printf("i = %d\n", i); // 6
printf("Pre-decrement\n");

  printf("--i = %d\n", --i); // 5
  printf("i = %d\n", i); // 5

  return 0;
}
