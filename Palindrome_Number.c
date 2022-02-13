#include<stdio.h>
int main()
{
    int t,n,sum=0,temp,r;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d",&n);
        temp=n;
        sum=0;
        while(n>0)
        {
            r=n%10;
            sum=sum*10+r;
            n=n/10;
        }
        if(sum==temp)
          printf("True
");
        else
          printf("False
");
    
        t--;
    }
}