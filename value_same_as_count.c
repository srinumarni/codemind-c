#include<stdio.h>
int main()
{
    int n,x[30],y[10]={0},i,j,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&x[i]);
    
    for(i=0;i<n;i++)
    {
        y[x[i]]++;
    }
    for(i=1;i<10;i++)
    {
        if(y[i]==i)
          count++;
    }
    
        printf("%d",count);
    
    return 0;
}