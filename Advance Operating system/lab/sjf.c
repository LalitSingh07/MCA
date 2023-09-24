#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int processes[n];
    int arrival_time[n];
    int burst_time[n];
    int ct[n];

    printf("Enter the arrival time and burst time for each process:\n");
    for (int i = 0; i < n; i++) {
        printf("Process %d:\n", i + 1);
        printf("Arrival Time: ");
        scanf("%d", &arrival_time[i]);
        printf("Burst Time: ");
        scanf("%d", &burst_time[i]);
        processes[i] = i + 1;
    }

 

   for(int i=1;i<n;i++){
      for(int j = i+1;i<n;i++){
         if(at[i]>))
      }
   }
    return 0;
}
