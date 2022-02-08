#include<stdio.h>
int main()
{
    int n,x[10],k,i,sum1=0,sum2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
          scanf("%d",&x[i]);
          if(i<n/2)
            sum1+=x[i];
          else
            sum2+=x[i];
    }
    
    printf("%d
%d",sum1,sum2);
    return 0;
}