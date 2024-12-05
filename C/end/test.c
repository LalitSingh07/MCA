#include<stdio.h>
int main(){
 int mat[3][3];
 int mat1[3][3];

 int mat3[3][3];
 int n =3;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("mat[%d][%d] : ",i,j);
        scanf("%d",&mat[i][j]);
    }
  }
  printf("mattrix 2");

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("mat1[%d][%d] : ",i,j);
        scanf("%d",&mat1[i][j]);
    }
  }

    for(int i = 0;i<n;i++){
        for(int j =0;j<n;j++){

            mat3[i][j]=0;
            for(int k =0;k<n;k++){
                mat3[i][j] += mat[i][k]*mat1[k][j];
            }
        }
    }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("%d\t",mat3[i][j]);
       
    }
    printf("\n");
  }
  
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("%d\t",mat3[i][j]);
       
    }
    printf("\n");
  }



  return 0 ;

}

