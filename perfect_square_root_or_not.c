#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float s;
    scanf("%d",&n);
    s=sqrt(n);
    if(s>(int)s)
       printf("False");
    else
       printf("True");
    
    return 0;
}