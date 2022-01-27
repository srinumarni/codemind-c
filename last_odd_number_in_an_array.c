#include<stdio.h>
int main()
{
    int n,x[20],ind=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]%2!=0)
          ind=i;
    }
    printf("%d",x[ind]);
    return 0;
}