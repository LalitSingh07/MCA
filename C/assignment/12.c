#include<stdio.h>
int main(){
    int n,search,position;
    printf("enter the number of element");
    scanf("%d",&n);
     int arr[n];

    for(int i =0; i <n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element to search");
    scanf("%d",&search);

    for(int j = 0;j<n;j++){
        if(search==arr[j]){
           position =j+1;
        }
    }
    printf("position is %d",position);
}