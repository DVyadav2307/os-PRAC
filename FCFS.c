#include<stdio.h>
#include<stdlib.h>
int FCFS();
int main()
{
    //Auther: DIVYANSHU YADAV
    //type: FCFS
    system("cls");
    int process, AT[100], BT[100];
    int b;
    printf("Enter the number of processes:");
    scanf("%d",&process);
    for(int i=0;i<process;i++)
    {
        printf("process: P%d\n Enter the arrival time: ",i+1);
        scanf("%d",&AT[i]);
        printf(" Enter the Bust time: ");
        scanf("%d",&BT[i]);
    }
    FCFS(process,AT,BT);
}
int FCFS(int process,int AT[],int BT[])
{   //cal of CT
    int CT[100],TAT[100],WT[100],i=0;
    CT[i]=AT[i]+BT[i];
    for(i=1;i<process;i++)
    {
        if(AT[i]<=CT[i-1])
            CT[i]=CT[i-1]+BT[i];
        else
            CT[i]=AT[i]+BT[i]+CT[i-1];
    }
    for(i=0;i<process;i++)
    {
    TAT[i]=CT[i]-AT[i];
    WT[i]=TAT[i]-BT[i];
    }
    printf("\nProcess \t Arrival time \t Bust Time \t Completion time \t Turn Around Time\t Waiting Time");
    for(int i=0;i<process;i++)
    printf("\nProcess #%-12d%-15d%-18d%-21d%-25d%-27d",i+1,AT[i],BT[i],CT[i],TAT[i],WT[i]);
    int avg_TAT=0,avg_WT=0;
    for(int i=0;i<=process;i++)
    {
        avg_TAT=avg_TAT+TAT[i];
        avg_WT=avg_WT+WT[i];
    }
    printf("\n Average TAT= %d\n Average WT= %d",avg_TAT/process,avg_WT/process);
}
