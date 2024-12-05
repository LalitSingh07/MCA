#include<stdio.h>
void sum(int n);
void sum(int n){
    int sum=0,num=n;
  while (num > 0) {
    int digit = num % 10;
    sum += digit;
    num /= 10;
  }

    printf("%d",sum);
}
int main(){
    int n ;
    printf("enter the number");
    scanf("%d",&n);
    sum(n);
}