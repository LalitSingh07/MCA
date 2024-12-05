#include<stdio.h>  
#include<conio.h>  
void main() {  
   float x,y;
   printf("enter the value of x");
   scanf("%f",&x);
   if (x <= 1){
    y = 1.2 * x +0.98;
   }else{
     y = 1.7 * x +0.09;
   }
   printf("y = %.2f",y);
   
   

}  