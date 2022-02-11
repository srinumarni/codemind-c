#include<stdio.h>
int main()
{
    char x[30],count=0,i;
    scanf("%[^
]s",x);
    
    for(i=0;x[i]!=NULL;i++)
    {
        if(x[i]==' ')
           continue;
         count++;
    }
    printf("%d",count);
    return 0;
}