#include<stdio.h>
int main()
{
    int n,x[20],e[20],o[20],i,j=0,k=0,min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]%2==0)
          e[j++]=x[i];
        else
          o[k++]=x[i];
    }
    min=j>k?k:j;
    for(i=0;i<min;i++)
    {
        printf("%d %d ",e[i],o[i]);
    }
    if(min==j)
       for(i=min;i<k;i++)
         printf("%d ",o[i]);
    else
       for(i=min;i<j;i++)
          printf("%d ",e[i]);
    if(n%2!=0)
       printf("0");
    return 0;
}