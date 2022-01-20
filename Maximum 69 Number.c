#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,sum=0,found=0,r;
    scanf("%d",&n);
    d=(int)log10(n);
    while(n>0)
    {
      r=n/(int)ceil(pow(10,d));
      if(found==0)
      {
         if(r!=9)
          {
            sum=sum*10+9;
            found=1;
            
          }
          else
           sum=sum*10+r;
      }
      else
      sum=sum*10+r;
      n=n%(int)ceil(pow(10,d));
      d=d-1;
    }
    printf("%d",sum);
    return 0;
}