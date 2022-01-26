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
    int n,d1,d2,i,t;
    scanf("%d",&t);
    while(t>0)
    {
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
    if(d1==d2)
      printf("%d
",n-d1);
    else if(d1>d2)
      printf("%d
",n-d2);
    else
      printf("%d
",n+d1);
    
    t--;
    }
    return 0;
}