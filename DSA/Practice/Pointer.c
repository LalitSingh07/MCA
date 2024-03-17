#include<stdio.h>

int main(){
    int a = 10;
    int *b;
    b = &a;
    printf("Value of a: %d\n", a);
    printf("Value of a: %d\n", *(&a));
    printf("Value of a: %d\n", *b);
    printf("Address of a: %u\n", &a);
    printf("Address of b: %u\n", &b);
    printf("Value of b: %p\n", b);
    printf("Value of *b: %d\n", *b);
    return 0;


}