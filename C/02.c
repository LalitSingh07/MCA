#include<stdio.h>
int main(){
    float num1,num2,sum,sub,mul,div;
    printf("enter the two numbers :");
    scanf("%f%f",&num1,&num2);
    sum =num1+num2;
    sub =num1-num2;
    mul =num1*num2;
    div =num1/num2;
    printf("the sum of two number is %f\n",sum);
    printf("the subtraction of two number is %f\n",sub);
    printf("the multiplication of two number is %f\n",mul);
    printf("the division of two number is %f\n",div);
}