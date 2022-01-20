#include<stdio.h>
int main()
{
    int n,i,o_sum=0,x[100];
    scanf("%d",&n);

    for(i=0;i<n;i++)
     { 
        scanf("%d ",&x[i]);
        if(i%2!=0)
          o_sum+=x[i];
     }
    
      printf("%d",o_sum);
    return 0;
}