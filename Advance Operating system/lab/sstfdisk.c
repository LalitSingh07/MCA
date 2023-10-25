#include <stdio.h>
#include <math.h>
int main()
{
 int r,i,temp,j, s,ch, seektime=0,cal,qu[r],mod[r];
 printf("\nEnter the Requests:");
 scanf("%d", &r);
 for (int i = 0; i < r; i++)
 {
 printf("\n Enter Cylinder %d value:", i);
 scanf("%d", &qu[i]);
 }
 printf("\nEnter Starting Cylinder of Disk:");
 scanf("%d", &s);
 ch = s;
 for( i = 0; i<r;i++){
    mod[i]= fabs(qu[i]-ch);
 }
 for( i = 0; i<r;i++){
    printf("%d\n",mod[i]);
 }
printf("--------------");
   for (i = 0; i < r - 1; i++) {
    for (j = i + 1; j < r; j++) {
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
   for( i = 0; i<r;i++){
    printf("%d\n",mod[i]);
 }
  
 return 0;
}