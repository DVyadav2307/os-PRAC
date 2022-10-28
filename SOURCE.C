#include<stdio.h>
#include<conio.h>
struct process
{
    int burst,wait;
} p[20]={0,0};
int main()
{
    int n,i,total_wait=0, total_turn=0;
    printf("\n This project is created by Dv yadav\n Enter the no. of process ");
    scanf_s("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the burst time (in milli sec) for process #%d: ",i+1);
        scanf_s("%d",&p[i].burst);
    }
    printf("\nProcess \t waiting time \t turn around time\n\t\t(in ms)\t(in ms)");
    for(i=0;i<n;i++)
    {
        printf("\nProcess #%-12d%-15d%-15d",i+1,p[i].wait,p[i].burst);
        p[i+1].wait=p[i].wait+p[i].burst;
        p[i+1].burst=p[i+1].wait+p[i].burst;
        total_wait=total_wait+p[i].wait;
        total_turn=total_turn+p[i].burst;
    }
    printf("\n\nAverage in...\nwaiting time: %d ms\nTurn around time: %d ms",total_wait,total_turn);
    _getch();
    return 0;
}