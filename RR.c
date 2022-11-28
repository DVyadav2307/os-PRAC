#include<stdio.h>  
int main()  
#define max 10
{  
int i,at[max],bt[max],temp[max],NOP,sum=0,count=0,y,quant,wt=0,tat=0;  
float avg_wt, avg_tat;  
printf(" Enter The Total number of Process: ");  
scanf("%d", &NOP);  
y = NOP;  
for(i=0; i<NOP; i++)  
{  
printf("\n Enter the Arrival & Burst time of P[%d]: ", i+1);  
scanf("%d%d", &at[i],&bt[i]);  
temp[i] = bt[i]; 
}  
printf("\n Enter the Time Quantum for the process: \t");  
scanf("%d", &quant);  
printf("\n Process BT \tTAT \t WT ");  
for(sum=0, i = 0; y!=0; )  
{  
if(temp[i] <= quant && temp[i] > 0)
{  
sum = sum + temp[i];  
temp[i] = 0;  
count=1;  
}
else if(temp[i] > 0)  
{  
temp[i] = temp[i] - quant;  
sum = sum + quant;    
}  
if(temp[i]==0 && count==1)  
{  
y--; 
printf("\n P[%d] \t %d \t %d \t %d", i+1, bt[i], sum-at[i], sum-at[i]-bt[i]);  
wt = wt+sum-at[i]-bt[i];  
tat = tat+sum-at[i];  
count =0;     
}  
if(i==NOP-1)  
{  
i=0;  
}  
else if(at[i+1]<=sum)  
{  
i++;  
}  
else  
{  
i=0;  
}  }
avg_wt = wt * 1.0/NOP;  
avg_tat = tat * 1.0/NOP;  
printf("\n Average WT : %.2f", avg_tat);  
printf("\n Average TAT: %.2f", avg_wt);  
}