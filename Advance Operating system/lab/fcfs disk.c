#include <stdio.h>
#include <math.h>
int main()
{
 int r, s, seektime=0,cal,qu[r];
 printf("\nEnter the Requests:");
 scanf("%d", &r);
 for (int i = 0; i < r; i++)
 {
 printf("\n Enter Cylinder %d value:", i);
 scanf("%d", &qu[i]);
 }
 printf("\nEnter Starting Cylinder of Disk:");
 scanf("%d", &s);
 cal=s-qu[0];
 seektime= fabs(cal);
 for (int i = 1; i < r; i++)
 { 
 cal=qu[i-1]-qu[i];
 seektime=seektime+fabs(cal);
 }
 printf("\nSeektime is :%d",seektime);
 return 0;
}