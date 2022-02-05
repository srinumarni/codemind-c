#include<stdio.h>
int main()
{
    int n,i,x[50],y[10]={0},sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     {
         scanf("%d",&x[i]);
         y[x[i]]++;
     }
     for(i=1;i<10;i++)
     {
         if(y[i]!=0 && i%2==0)
            sum=sum+i;
     }
     printf("%d",sum);
     return 0;
    
}