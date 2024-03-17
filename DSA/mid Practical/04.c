//Write a program to check given matrix is Sparce or not using pointer.
#include <stdio.h>
#define MAX_SIZE 100
int isSparse(int mat[][MAX_SIZE], int m, int n) {
    int i, j;
    int count = 0;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (mat[i][j] == 0) {
                count++;
            }
        }
    }
    if (count > (m * n) / 2) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int mat[MAX_SIZE][MAX_SIZE];
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
    if (isSparse(mat, m, n)) {
        printf("The matrix is sparse\n");
    } else {
        printf("The matrix is not sparse\n");
    }
    return 0;
}
