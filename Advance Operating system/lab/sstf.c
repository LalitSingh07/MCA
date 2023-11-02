#include <stdio.h>
#include <math.h>
int main()
{
 int r,i,temp,j, h, seektime=0,cal,qu[r],mod[r];
 printf("\nEnter the Requests:");
 scanf("%d", &r);
 for (i = 0; i < r; i++)
 {
 printf("\n Enter Cylinder %d value:", i);
 scanf("%d", &qu[i]);
 }
 printf("\nEnter Starting Cylinder of Disk:");
 scanf("%d", &h);
 int n = r;

 for (i=0;i<r;i++){
   int mod[x];
   for(j=0;j<n;j++){
      mod[j]=fabs(h)-qu[j];

       for (i = 0; i < r - 1; i++) 
       {
         for (j = i + 1; j < r; j++) 
         {
         if(mod[i]>mod[j])
            {
               temp = mod[i];
               mod[i] = mod[j];
               mod[j] = temp;

               temp = qu[i];
               qu[i] = qu[j];
               qu[j] = temp;

            }
         }
       }
       h = qu[0];
       
       x-=1;

   }
 }


  
 return 0;
}