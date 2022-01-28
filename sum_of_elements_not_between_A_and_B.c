#include<stdio.h>
int main()
{
    int n,x[10],p,q,sum=0,i,found=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&x[i]);
      
    scanf("%d%d",&p,&q);
    if(p>q)
    {
        int c=p;
        p=q;
        q=c;
    }
    for(i=0;i<n;i++)
    {
        if(x[i]>=p && x[i]<=q)
            continue;
        sum=sum+x[i];
    }
    printf("%d",sum);
    return 0;
}