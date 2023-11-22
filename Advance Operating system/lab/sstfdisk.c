#include <stdio.h>
#include <stdlib.h>
#define max 1000
// finding minimum distance
int find_min_dist(int r[], int n, int head) {
 int min_dist = max;
 int index = -1;
 for (int i = 0; i < n; i++) {
 if (abs(r[i] - head) < min_dist) {
 min_dist = abs(r[i] - head);
 index = i;
 }
 }
 return index;
}
int main() {
 int h, n, i, temp, r[15];
 printf("\nEnter the number of requests: ");
 scanf("%d", &n);
 printf("\nEnter request values: ");
 for (i = 0; i < n; i++) {
 scanf("%d", &r[i]);
 }
printf("\nEnter the head position: ");
 scanf("%d", &h);
 int totalmovement= 0;
 printf(" Visited Cylinders: ");
 for (i = 0; i < n; i++) {
 int index = find_min_dist(r, n, h);
 if (index == -1)
 break;
 printf("%d ", r[index]);
 totalmovement = totalmovement + abs(r[index] - h);
 h = r[index];
 r[index] = max; // visited
 }
 printf("\nTotal movement: %d", totalmovement);
 return 0;
}