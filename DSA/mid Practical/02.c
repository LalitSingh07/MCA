
#include <stdio.h>
#define MAX_SIZE 100

void insertAtEnd(int *arr, int *size, int num) {
    arr[*size] = num;
    (*size)++;
}
void insertAtPosition(int *arr, int *size, int num, int pos) {
    int i;
    for (i = *size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = num;
    (*size)++;
}
void deleteFromEnd(int *arr, int *size) {
    (*size)--;
}
void deleteFromPosition(int *arr, int *size, int pos) {
    int i;
    for (i = pos; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}
int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int i;
    int num, pos;
    int choice;
    printf("Enter initial size of array: ");
    scanf("%d", &size);
    printf("Enter elements of array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter 1 to insert at end\n");
    printf("Enter 2 to insert at position\n");
    printf("Enter 3 to delete from end\n");
    printf("Enter 4 to delete from position\n");
    printf("Enter 5 to display\n");
    printf("Enter 0 to exit\n");
    while (1) {
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter number to insert: ");
                scanf("%d", &num);
                insertAtEnd(arr, &size, num);
                break;
            case 2:
                printf("Enter number to insert: ");
                scanf("%d", &num);
                printf("Enter position to insert: ");
                scanf("%d", &pos);
                insertAtPosition(arr, &size, num, pos);
                break;
            case 3:
                deleteFromEnd(arr, &size);
                break;
            case 4:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                deleteFromPosition(arr, &size, pos);
                break;
            case 5:
                printf("Array: ");
                for (i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 0:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}


