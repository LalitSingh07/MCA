#include<stdio.h>

int transp(int x,int mat[x][x]){
    int i,sum=0;
     for(i=0;i<x;i++){
        sum += mat[i][i];
        }
        return sum;
    }
int main(){
    int x,i,j;
    printf("enter the square matrix size");
    scanf("%d",&x);
    int mat[x][x];
    printf("enter the values \n");
    for(i=0;i<x;i++){
        for(j=0;j<x;j++){
            printf("mat[%d][%d]:",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("entered matrix is :\n");
    for(i=0;i<x;i++){
        for(j=0;j<x;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    printf("the sum of diagonals is %d",transp(x,mat));

}