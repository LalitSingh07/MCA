#include <stdio.h>

int main() {
  int i;
 printf("enter the number :");
 scanf("%d",&i);
  printf("initial value of i is %d\n",i);
  printf(" the current  value of i by  using i++ operator , i = %d\n", i++);
  printf("now value of i after i++ is %d\n",i);
  printf(" the current  value of i by  using  using i-- operator , i  = %d\n", i--);
  printf("now value of i after i-- is %d\n",i);
 
  return 0;
}