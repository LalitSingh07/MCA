#include <stdio.h>

void findMaxAndMin(int arr[], int n, int *max, int *min) {
    if (n == 1) {
        *max = arr[0];
        *min = arr[0];
    } else {
        *max = arr[0];
        *min = arr[0];

        for (int i = 1; i < n; i++) {
            if (arr[i] > *max) {
                *max = arr[i];
            }

            if (arr[i] < *min) {
                *min = arr[i];
            }
        }
    }
}

int main() {
    int n,arr[n];
    printf("enter the number of elements in array");
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    
    int max, min;
    findMaxAndMin(arr, n, &max, &min);

    printf("The maximum number is %d.\n", max);
    printf("The minimum number is %d.\n", min);

    return 0;
}
