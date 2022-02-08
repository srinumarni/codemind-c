#include<stdio.h>
#include<math.h>
int prime(int n);

int main()
{
    int n,x[50],i,k,count=0;
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
     {
         scanf("%d",&x[i]);
         
     }
     scanf("%d",&k);
     for(i=0;i<n;i++)
     {
         if(prime(x[i]) && x[i]>=k)
           {
             
               count++;
           }
     }
   
     printf("%d",count);
    
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