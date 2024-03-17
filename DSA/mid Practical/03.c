//Write a program to find transpose of a given matrix using pointer.
#include <stdio.h>
#define MAX_SIZE 100
void transpose(int mat[][MAX_SIZE], int m, int n, int res[][MAX_SIZE]) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            res[j][i] = mat[i][j];
        }
    }
}

int main() {
    int mat[MAX_SIZE][MAX_SIZE];
    int res[MAX_SIZE][MAX_SIZE];
    int m, n;
    int i, j;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);
    printf("Enter elements of matrix: ");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    transpose(mat, m, n, res);
    printf("Transpose of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}