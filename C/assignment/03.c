#include<stdio.h>
int fact(int n);
int fact(int n){
    int facto = 1;
    for (int i=n;i>=2;i--){
        facto *=i;
    }
    return facto;

}
void main(){
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    printf("the factorial of %d is %d", n,fact(n));
  
}