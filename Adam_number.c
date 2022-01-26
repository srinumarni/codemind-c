#include<stdio.h>
int reverse(int);
int main()
{
    int n,rev,temp;
    scanf("%d",&n);
    rev=reverse(n);
    temp=reverse(rev*rev);
    if(n*n==temp)
      printf("True");
    else
      printf("False");
      
    return 0;
}
int reverse(int x)
{
    int r,sum=0;
     while(x>0)
     {
         r=x%10;
         sum=sum*10+r;
         x=x/10;
     }
     return sum;
}
