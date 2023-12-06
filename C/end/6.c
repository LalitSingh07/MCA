#include<stdio.h>

 void transp(int x,int y,int mat[x][y]){
    int i,j,trp[x][y];
     for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            trp[i][j]=mat[j][i];
        }
    }
    printf("transpose matrix is :\n");
     for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("%d\t",trp[i][j]);
        }
        printf("\n");
    }
 }
int main(){
    int x,y,i,j;
    printf("enter the number of row ");
    scanf("%d",&x);
    printf("enter the number of column ");
    scanf("%d",&y);
    int mat[x][y];
    printf("enter the values \n");
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("mat[%d][%d]:",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("entered matrix is :\n");
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    transp(x,y,mat);

}