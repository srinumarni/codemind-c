#include<stdio.h>
int main()
{
    int n,x[40],i,a,b,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&x[i]);
    scanf("%d%d",&a,&b);
    
    for(i=0;i<n;i++)
    {
        if(x[i]>=a && x[i]<=b)
            if(max<x[i])
               max=x[i];
    }
    if(max==0)
      printf("-1");
    else
    printf("%d",max);
    return 0;
}