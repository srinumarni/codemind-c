#include<stdio.h>
#include<math.h>
int prime(int n);

int main()
{
    int n,x[50],i,sum=0,count=0;
    float p_avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     {
         scanf("%d",&x[i]);
         
     }
     for(i=0;i<n;i++)
     {
         if(prime(x[i]))
           {
               sum=sum+x[i];
               count++;
           }
     }
     p_avg=(float)sum/count;
     printf("%.2f",p_avg);
    
     return 0;
}
int prime(int p)
{
    int i;
    if(p==1)
      return 0;
    for(i=2;i<=sqrt(p);i++)
       if(p%i==0)
         return 0;
     
       return 1;
}