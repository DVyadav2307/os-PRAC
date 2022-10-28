#include<stdio.h>
#include<conio.h>
int main()
{
    float tat[10]={0},wait[10]={0},bust[10]={0},arival[10]={0},ct[10]={0};
    int n,i;
    float total_wait=0, total_turn=0;
    printf("\n This project is created by Dv yadav\n Enter the no. of process ");
    scanf_s("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nfor process #%d Enter the arrival time9in milli sec: ",i+1);
        scanf_s("%f",&arival[i]);
        printf("Enter the bust time (in milli sec): ");
        scanf_s("%f",&bust[i]);
    }
  printf("\nprocess \t bust time \t waiting time \t turn around time\n\t\t(in ms)\t(in ms)\t(in ms)");
    for(i=0;i<n;i++)
    {
       ct[i+1]=bust[i]+ct[i];
       printf("\nCT=%f",ct[i]);
       // printf("\nProcess #%-12f%-15f%-15f%-15f",i+1,bust[i],tat[i],wait[i]);

    }
    printf("\n\nAverage in...\nwaiting time: %f ms\nTurn around time: %f ms",total_wait/n,total_turn/n);
    _getch();
    return 0;
}