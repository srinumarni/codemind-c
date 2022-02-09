#include<stdio.h>
int main()
{
  int n,x[20],count=0,i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&x[i]);
  
  for(i=0;i<n-2;i++)
  {
      if(x[i+1]>x[i] && x[i+1]<x[i+2] || x[i+1]<x[i]&&x[i+1]>x[i+2])
        {
            printf("no");
            return 0;
        }
  }
  printf("yes");
  return 0;
}
