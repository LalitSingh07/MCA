#include <stdio.h>
struct process
{
 int at;
 int bt;
 int ct;
 int tat;
 int wt;
};


void find(struct process p[], int n)
{
 p[0].ct = p[0].at + p[0].bt;
 p[0].tat = p[0].ct - p[0].at;
 p[0].wt = p[0].tat - p[0].bt;
 for (int i = 1; i < n; i++)
 {
 p[i].ct = p[i - 1].ct + p[i].bt; 
 p[i].tat = p[i].ct - p[i].at; 
 p[i].wt = p[i].tat - p[i].bt; 
 }
}

int main(){

    int i, n;
 printf("\nEnter the number of Processes: ");
 scanf("%d", &n);
 struct process p[n];
 for (i = 0; i < n; i++)
 {
 printf("\nEnter the arrival time for process %d:", i + 1);
 scanf("%d", &p[i].at);
 printf("\nEnter the burst time for process %d:", i + 1);
 scanf("%d", &p[i].bt);
 }

 


}