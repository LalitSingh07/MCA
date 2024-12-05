#include<stdio.h>   
void  fibo(int num); 
void  fibo(int num){
int n1=0,n2=1,n3,i;
printf("\n%d %d",n1,n2);  
 for(i=2;i<num;i++)    
 {    
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 }  
}
int main()    
{    
 int num;    
 printf("Enter the number of elements:");    
 scanf("%d",&num);  
 fibo(num);  
 
  return 0;  
 }    