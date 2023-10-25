#include <stdio.h>

int main() {
 int p=9,q=15,r=16,s=12,t,u;
 t =!(p<q||q<r);
 u=(p>q)?p-q:q-p;
 
 printf("%d",t);
 printf("%d",u);
//  printf("%d",t);
 return 0;


}
