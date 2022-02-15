#include<stdio.h>
#include<math.h>
int main()
{
    char x[30];
    int min=123,max=96,i,s1=0,s2=0;
    scanf("%[^
]s",x);
    
    for(i=0;x[i]!=NULL;i++)
    {
        if(x[i]==' ')
        {
            //s1+=min;
            //s2+=max;
            printf("%c %c ",min,max);
            min=123;
            max=96;
            
        }
        else
        {
            if(x[i]>=max)
              max=x[i];
            if(x[i]<=min)
              min=x[i];
        }
    }
    //s1+=min;
    //s2+=max;
    printf("%c %c",min,max);
    return 0;
}