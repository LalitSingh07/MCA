#include<stdio.h>
#include<stdlib.h>
#define max 1000
 int mindist(int arr[],int n, int head){
    int min = max;
    int index = -1;
    for(int i =0;i<n;i++){
        if(abs(arr[i]-head) < min){
            min = abs(arr[i]-head);
            index = i;
        }
    }
    return index;
 }
 int main(){
    int arr[100],n,h;
    printf("enter num of req");
    scanf("%d",&n);
    printf("enter the head");
    scanf("%d",&h);
    for (int i = 0; i < n; i++)
    {
        
    }
    
}