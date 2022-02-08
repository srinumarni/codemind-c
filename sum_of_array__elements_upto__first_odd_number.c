#include<stdio.h>
int main()
{
    int n,x[10],k,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
          scanf("%d",&x[i]);
    scanf("%d",&k);
    for(i=0;i<n;i++)
       if(x[i]%2!=0)
         break;
       else
          sum=sum+x[i];
    
    printf("%d",sum);
    return 0;
}