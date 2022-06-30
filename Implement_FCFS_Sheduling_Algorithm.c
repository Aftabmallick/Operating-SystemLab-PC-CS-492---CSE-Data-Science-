#include <stdio.h>

int main()
{
    int proc[10],burst[10],n,i,wt[10],tat[10],avtat=0,avwt=0;
    printf("Enter no of process :");
    scanf("%d",&n);
    printf ("Enter burst times: ");
    for(i=1;i<=n;i++){
        proc[i]=i;
        scanf("%d",&burst[i]);
    }
    wt[0]=0;
    for(i=1;i<=n;i++){
        wt[i]=burst[i-1]+wt[i-1];
        tat[i]=burst[i]+wt[i];
    }
    printf("Process\tBurst\tWaiting\tturnaround\n");
    for(i=1;i<=n;i++){
        printf("%d\t%d\t%d\t%d\n",proc[i],burst[i],wt[i],tat[i]);
    }
     for(i=1;i<=n;i++){
         avtat+=tat[i];
         avwt+=wt[i];
     }
     printf("Average turn around time : %f\nAverage Waiting time: %f",(float)avtat/n,(float)avwt/n);
    
}
