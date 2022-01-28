#include<stdio.h>
int main()
{
    int x[10],n,even[10],odd[10],i,j=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     {
         scanf("%d",&x[i]);
         if(x[i]%2==0)
           even[j++]=x[i];
         else
           odd[k++]=x[i];
     }
     for(i=0;i<j;i++)
       printf("%d ",even[i]);
     for(i=0;i<k;i++)
       printf("%d ",odd[i]);
     return 0;

}