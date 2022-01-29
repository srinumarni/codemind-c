#include<stdio.h>
int main()
{
    int n,x[10],i,max=0,a,b;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&x[i]);
    
    scanf("%d%d",&a,&b);
    
    for(i=0;i<n;i++)
    {
        if(x[i]>=a && x[i]<=b)
        {
            continue;
        }
        else
        {
            if(max<x[i])
              max=x[i];
        }
    }
    if(max==0)
      printf("-1");
    else
    printf("%d",max);
    return 0;
}