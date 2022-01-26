#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,r,sum=0,temp;
    scanf("%d",&n);
    d=(int)log10(n)+1;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+ceil(pow(r,d));
        n=n/10;
        d--;
    }
    if(sum==temp)
       printf("True");
    else
       printf("False");
    return 0;
}