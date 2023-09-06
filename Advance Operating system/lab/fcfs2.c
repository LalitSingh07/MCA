#include <stdio.h>

void findWaitingTime(int n, int bt[], int wt[], int at[]) {
    int service_time[n];
    service_time[0] = at[0];

  
    for (int i = 1; i < n; i++) {
        service_time[i] = service_time[i - 1] + bt[i - 1];
    }

    for (int i = 0; i < n; i++) {
        wt[i] = service_time[i] - at[i];
       
    }
}




void findTurnaroundTime(int n, int bt[], int wt[], int tat[]) {
    
    for (int i = 0; i < n; i++) {
        tat[i] = bt[i] + wt[i];
    }
}





void findAverageTime(int processes[], int n, int bt[], int at[]) {
    int wt[n], tat[n];

    findWaitingTime(n, bt, wt, at);

    findTurnaroundTime(n, bt, wt, tat);


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
    int n;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int processes[n];
    int arrival_time[n];
    int burst_time[n];

    printf("Enter the arrival time and burst time for each process:\n");
    for (int i = 0; i < n; i++) {
        printf("Process %d:\n", i + 1);
        printf("Arrival Time: ");
        scanf("%d", &arrival_time[i]);
        printf("Burst Time: ");
        scanf("%d", &burst_time[i]);
        processes[i] = i + 1;
    }

    findAverageTime(processes, n, burst_time, arrival_time);

    return 0;
}
