#include<stdio.h>
#include<math.h>
int main()
{
    int x[20],n,i,d,k,count=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
     scanf("%d",&x[i]);
     
    for(i=0;i<n;i++)
    {   if(x[i]<0)
          x[i]=-x[i];
        if(x[i]==0)
          d=1;
        else
            d=(int)log10(x[i])+1;
        if(d==k)
          count++;
    }
    printf("%d",count);
    return 0;
}