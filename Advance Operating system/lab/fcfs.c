#include <stdio.h>
#include <stdlib.h> // for exit(0)
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
void display(struct process p[], int n)
{
 int i = 0;
 if (i == 0)
 {
 printf("\nCompletion Time for Pocess%d:%d", i + 1, p[i].ct);
 printf("\nTurn Around Time for Pocess%d:%d", i + 1, p[i].tat);
 printf("\n Wait Time for Process%d:%d", i + 1, p[i].wt);
 }
 for (int i = 1; i < n; i++)
 {
 printf("\nCompletion Time for Pocess%d:%d", i + 1, p[i].ct);
 printf("\nTurn Around Time for Pocess%d:%d", i + 1, p[i].tat);
 printf("\n Wait Time for Process%d:%d", i + 1, p[i].wt);
 }
}
void tablewise_display(struct process p[], int n)
{
 printf("\nProcess\tArrival Time\tBurst Time\tCompetion Time\tTurnaround Time\tWaiting Time\n");
 for (int i = 0; i < n; i++)
 {
printf("%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", i + 1, p[i].at, p[i].bt, p[i].ct, p[i].tat, 
p[i].wt);
 }
}
int main()
{
 int i, n,ch;
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
 
 while (1)
 {
 printf("\n1.Find\n2.Display\n3. Display in Tabular form\n4.Exit");
 printf("\n Enter your choice");
 scanf("%d", &ch);
 switch (ch)
 {
 case 1:
find(p, n);
 break;
 case 2:
 display(p, n);
 break;
 case 3:
 tablewise_display(p, n);
 break;
 case 4:
 exit(0);
 }
 }
}