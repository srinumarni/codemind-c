#include<stdio.h>
int main()
{
    int n,x[40],i,a,b,min=9999;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&x[i]);
    scanf("%d%d",&a,&b);
    
    for(i=0;i<n;i++)
    {
        if(x[i]>=a && x[i]<=b)
            if(min>x[i])
               min=x[i];
    }
    if(min==9999)
      printf("-1");
    else
    printf("%d",min);
    return 0;
}