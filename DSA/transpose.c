#include<stdio.h>

int main(){
    
    int arr[3][3];
    int temparr[3][3]; 
    for (int i = 0; i<3;i++)
    {
         for (int j=0;j<3;j++){
            printf("arr[%d][%d]",i+1,j+1);
            scanf("%d",&arr[i][j]);
            
         }
    }
    for (int i = 0; i<3;i++)
    {
         for (int j=0;j<3;j++){
           temparr[i][j] = arr[j][i];
            
         }
    }
    for (int i = 0; i<3;i++)
    {
         for (int j=0;j<3;j++){
           printf("%d",arr[i][j]);
            
         }
         printf("\n");
    }
    for (int i = 0; i<3;i++)
    {
         for (int j=0;j<3;j++){
           printf("%d",temparr[i][j]); 
            
         }
         printf("\n");
    }



}