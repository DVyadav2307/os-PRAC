#include<stdio.h>
#include<conio.h>
int main()
{
    float tat[10]={0},wait[10]={0},bust[10]={0},arival[10]={0};
    int n,i;
    float total_wait=0, total_turn=0;
    printf("\n This project is created by Dv yadav\n Enter the no. of process ");
    scanf_s("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the bust time (in milli sec) for process #%d: ",i+1);
        scanf_s("%f",&bust[i]);
    }
  printf("\nprocess \t bust time \t waiting time \t turn around time\n\t\t(in ms)\t(in ms)\t(in ms)");
    for(i=0;i<n;i++)
    {
        tat[i]=bust[i]+wait[i];
        total_wait=wait[i]+total_wait;
        total_turn=tat[i]+total_turn;
        printf("\nProcess #%-12f%-15f%-15f%-15f",i+1,bust[i],wait[i],tat[i]);
        wait[i+1]=tat[i];
    }
    printf("\n\nAverage in...\nwaiting time: %f ms\nTurn around time: %f ms",total_wait/n,total_turn/n);
    _getch();
    return 0;
}