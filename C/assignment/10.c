#include<stdio.h>
int main(){
    int n;
    printf("enter the number of element");
    scanf("%d",&n);
     int arr[n];

    for(int i =0; i <n;i++){
        scanf("%d",&arr[i]);
    }
    int largest = arr[0];

    for(int j = 1;j<n;j++){
        if (largest < arr[j]){
            largest= arr[j];
                    }
    }
    printf(" largest num is %d",largest);
}