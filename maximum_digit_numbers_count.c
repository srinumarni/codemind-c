#include<stdio.h>
#include<math.h>
int main()
{
    int x[20],n,i,d,max=0,count=0,b,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     scanf("%d",&x[i]);
     
    for(i=0;i<n;i++)
    {   b=x[i];
        if(b<0)
          b=-b;
        if(b==0)
          d=1;
        else
            d=(int)log10(b)+1;
        if(max<d)
        {
          max=d;
          count=1;
        }
        else if(max==d)
          count++;
    }
    for(i=0;i<n;i++)
    {   flag=0;
        b=x[i];
        if(b<0)
         { flag=1;
          b=-b;
         }
        if(b==0)
           d=1;
        else
           d=(int)log10(b)+1;
        if(d==max)
        {
            if(flag==1)
             printf("-%d ",b);
            else
             printf("%d ",b);
        }
          
        
    }
    return 0;
}