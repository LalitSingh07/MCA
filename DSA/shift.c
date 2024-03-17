#include<stdio.h>
void leftshift(int shifts,int n, int arr[n]){

        for(int i=0; i<shifts; i++)
    {
        int temp = arr[0];
        for(int j=0; j<n-1; j++)
        {
            arr[j] = arr[j+1];
        }
        arr[n-1] = temp;
    }
    
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");


}

void rightshift(int shifts, int n, int arr[n]){

        for(int i=0; i<shifts; i++)
    {
        int temp = arr[0];
        for(int j=0; j<n-1; j++)
        {
            arr[j] = arr[j+1];
        }
        arr[n-1] = temp;
    }
    
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

}
int main()
{
    int n,shifts;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        printf("arr[%d]",i+1);
        scanf("%d", &arr[i]);
    }
    printf("enter your choice \n 1. right shift\n 2.Left shift\n");
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the number of shifts: ");
        scanf("%d", &shifts);
        leftshift(shifts, n, arr);
        break;
    
    case 2:
        printf("Enter the number of shifts: ");
        scanf("%d", &shifts);
        rightshift(shifts,n,arr);
    
    default:
        break;
    }



    
    

    return 0;


}