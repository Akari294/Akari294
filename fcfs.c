#include <stdio.h>
void main()
{
   int tat[20],bt[20],wt[20],n,i,twt,ttat;
   printf("enter total number of processes");
   scanf("%d",&n);
   printf("enter the burst time of each processes");
   for(i=1;i<=n;i++)
{ 
   printf("\np%d:",i);
   scanf("%d",&bt[i]);
}
wt[1]=0;
twt=0;
ttat=0;
for(i=1;i<=n;i++)
{
 tat[i]=wt[i+1]=wt[i]+bt[i];
 twt+=wt[i];
 ttat+=tat[i];
}
printf("\nprocess\t\tburst time\twaiting time\tturnaround time");
for(i=1;i<=n;i++)
{
printf("\np%d\t\t%d\t\t%d\t\t%d",i,bt[i],wt[i],tat[i]);
printf("\navg wait time:%f",(float)/twt/n);
printf("\navg turn time:%f",(float)/ttat/n);
}
