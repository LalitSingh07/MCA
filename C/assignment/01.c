#include<stdio.h>

int sum(int n){
    int *pt,sum = 0;
    pt = (int*)calloc(n,sizeof(int));
    printf("enter the elements");
    for(int i = 0; i<n;i++){
        scanf("%d",&pt[i]);
    }
    for(int i = 0; i<n;i++){
        sum += pt[i];
    }
    return sum;

}
void main(){
    int  n;
    printf("enter the number of element");
    scanf("%d",&n);
    printf("the sum of %d numbers is %d",n,sum(n));

}