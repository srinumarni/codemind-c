#include<stdio.h>
bool prime(int n)
{
    int count=0,i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
          {
              count++;
              break;
          }
    }
    if(count==0)
      return true;
    else
       return false;
}
int main()
{
    int n,d1,d2,i;
   scanf("%d",&n);
    for(i=n;;i++)
    {
        bool found=prime(i);
        if(found)
          {
              d1=i-n;
              break;
          }
    }
    for(i=n;;i--)
    {
        bool found=prime(i);
        if(found)
         {
             d2=n-i;
             break;
         }
    }
    if(d1==0)
      printf("0");
    else if(d1>d2)
      printf("%d
",d2);
    else
      printf("%d
",d1);
    
    
    return 0;
}