#include<stdio.h>
void SumAvg(int n);

void SumAvg(int n){
    int i=1,sum=0,avg;
    while(i<=n){
        sum += i;
        i++;
    }
    avg = sum/n;
    printf("the sum of first %d natural numbers is %d and average is %d",n,sum,avg);

}
void main(){
    int  n;
    printf("enter the no. of natural numbers to sum");
    scanf("%d",&n);
    SumAvg(n);

}