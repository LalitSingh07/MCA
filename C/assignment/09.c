#include<stdio.h>
void series(int n);
void series(int n){
    int i =1,count=1;
    while (count<=n){
        printf("%d ",i);
        i+=2;
        count++;
    }
}
int main(){
    int n;
    printf("enter the no of elements: ");
    scanf("%d",&n);
    series(n);
    return 0;
}