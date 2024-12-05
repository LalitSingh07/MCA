#include <stdio.h>
void calc(int processes[], int n, int bt[], int at[]) {
int wt[n], tat[n],ct[n];

 ct[0] = bt[0]; 
 tat[0] = ct[0] - at[0];
 wt[0]=tat[0]-bt[0];
 for (int i = 1; i < n; i++)
 {
 ct[i] = ct[i - 1] + bt[i];
 tat[i] = ct[i] - at[i];
 wt[i]= tat[i] - bt[i];
 }

    float avg_wt = 0, avg_tat = 0;
    for (int i = 0; i < n; i++) {
        avg_wt += wt[i];
        avg_tat += tat[i];
    }
    avg_wt /= n;
    avg_tat /= n;

    printf("Process\tArrival Time\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\n", processes[i], at[i], bt[i], wt[i], tat[i]);
    }
    printf("Average Waiting Time: %.2f\n", avg_wt);
    printf("Average Turnaround Time: %.2f\n", avg_tat);
}



int main() {
  int i, j, n, temp,arrival_time[100],burst_time[100], processes[100];

  printf("Enter the number of processes: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("For Process %d\n", i + 1);
    printf("Enter the arrival time: ");
    scanf("%d", &arrival_time[i]);
    printf("Enter the burst time: ");
    scanf("%d", &burst_time[i]);
    processes[i] = i + 1;
  }



  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      if (arrival_time[i] > arrival_time[j]) {
        temp = arrival_time[i];
        arrival_time[i] = arrival_time[j];
        arrival_time[j] = temp;

        temp = burst_time[i];
        burst_time[i] = burst_time[j];
        burst_time[j] = temp;

        temp = processes[i];
        processes[i] = processes[j];
        processes[j] = temp;
      }
    }
  }
  

  for (i = 1; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      if (burst_time[i] > burst_time[j]) {
        temp = arrival_time[i];
        arrival_time[i] = arrival_time[j];
        arrival_time[j] = temp;

        temp = burst_time[i];
        burst_time[i] = burst_time[j];
        burst_time[j] = temp;

        temp = processes[i];
        processes[i] = processes[j];
        processes[j] = temp;
      }
    }
  }

  calc(processes, n, burst_time, arrival_time);


  return 0;
}