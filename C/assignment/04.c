#include<stdio.h>
void sqr(int n);
void sqr(int n){
  int *pt,sum = 0;
    pt = (int*)calloc(n,sizeof(int));
    printf("enter the values\n");
    for(int i = 0; i<n;i++){
        scanf("%d",&pt[i]);
    }
    for(int i = 0; i<n;i++){
        printf("%d = %d \n",pt[i], pt[i]*pt[i]);
    }
}
void main(){
    int n;
    printf("enter the number of elements ");
    scanf("%d",&n);
    sqr(n);
}