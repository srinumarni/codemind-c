#include<stdio.h>
int main()
{
    int n,x[20],count=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&x[i]);
      
     for(i=0;i<n-2;i++)
     {
        
           // for(j=i+1;j<n;j++)
          //  {
        if(x[i]%2==0 && x[i+1]%2!=0 && x[i+2]%2==0)
        {
            count++;
                      
        }
          //  }
         
     }
     printf("%d",count);
     return 0;
}