#include <stdio.h>
#include <math.h>

int main() {
  int r,x ;

  printf("\nEnter the Requests:");
  scanf("%d", &r);
  x = r+1;
   int qu[x];
   printf("head");
   scanf("%d",&qu[0]);
  for (int i = 1; i < x; i++) {
    printf("enter the value %d :", i);
    scanf("%d", &qu[i]);
  }
  for (int i = 0; i < x; i++) {
    printf(" %d \n", qu);
   
  }




  return 0;
}
