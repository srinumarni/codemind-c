#include<stdio.h>
#include<math.h>

int main()
{
    char x[30];
    int min=123,max=64,i;
    scanf("%[^
]s",x);
    
    for(i=0;x[i]!=NULL;i++)
    {
        if(x[i]==' ')
        {
            
            printf("%d ",abs(max-min));
            
            min=123;
            max=64;
        }
        else
        {
            if(x[i]>=max)
              max=x[i];
            if(x[i]<=min)
              min=x[i];
        }
    }
   
    
    printf("%d ",max-min);
   
    return 0;
}

