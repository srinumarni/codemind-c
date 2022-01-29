#include<stdio.h>
#include<math.h>
int main()
{
    int n,x[10],sum=0,i,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     scanf("%d",&x[i]);
    
    for(i=n-1;i>=0;i--)
    {
        sum=sum+x[i]*pow(2,k);
        k++;
    }
    printf("%d",sum);
    return 0;
    
}