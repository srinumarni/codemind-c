#include<stdio.h>
int main()
{
    int x[10],y[10],out1[100]={0},out2[100]={0},i,count=0,m,n;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        scanf("%d",&x[i]);
        out1[x[i]]++;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&y[i]);
        out2[y[i]]++;
    }
    for(i=0;i<100;i++)
    {
if(out1[i]>0 && out2[i]==0 || out1[i]==0 && out2[i]>0)
          count++;
    }
    printf("%d",count);
    return 0;
}