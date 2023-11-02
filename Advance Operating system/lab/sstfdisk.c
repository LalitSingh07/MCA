#include <stdio.h>
#include <math.h>

int main() {
  int r,x ,i,j,k,temp;

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
 
 for (i = 0; i < x - 1; i++) 
       {
         for ( j = i + 1; j < x; j++) 
         {
         if(qu[i]>qu[j])
            {
               

               temp = qu[i];
               qu[i] = qu[j];
               qu[j] = temp;

            }
         }
       }

 for (int i = 0; i < x; i++) {
    printf(" %d \n", qu[i]);
   
  }

  return 0;
}
