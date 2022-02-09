#include<stdio.h>
int main()
{
    int x[20],y[20],i,j,m,n,flag=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&y[i]);
      
    }
    for(i=0;i<m;i++)
    { flag=0;
      for(j=0;j<n;j++)
        if(x[i]==y[j])
           {
               flag=1;
               break;
           }
      if(flag==0)
       printf("%d ",x[i]);
    }
   
    for(i=0;i<n;i++)
    { flag=0;
      for(j=0;j<m;j++)
        if(y[i]==x[j])
           {
               flag=1;
               break;
           }
      if(flag==0)
       printf("%d ",y[i]);
    }
    
    return 0;
}