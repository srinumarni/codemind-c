#include<stdio.h>
int main()
{
    int n,x[30],y[10]={0},i,count=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&x[i]);
      
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        y[x[i]]++;
    }
    for(i=1;i<10;i++)
    {
        if(y[i]==k)
         {
             printf("%d ",i);
             count++;
         }
    }
    
       if(count==0)
         printf("-1");
    
    return 0;
}