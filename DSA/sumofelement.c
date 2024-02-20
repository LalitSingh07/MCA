#include<stdio.h>

 int findpos(int n, int arr[n],int sum){

    int i,j;
    for (i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if (arr[i]+arr[j] == sum){
                printf("the element is %d and %d \n",arr[i],arr[j]);
            }
        }
    }
    return 0;

 }

int main(){
    int n,x,y,sum;

    printf("enter the number of elemenet in  array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter the element of the array");
        scanf("%d",&arr[i]);
    }
    printf("enter the sum of a number");
    scanf("%d",&sum);
  
    findpos(n,arr,sum);
 
    return 0;


}