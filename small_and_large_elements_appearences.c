#include<stdio.h>
#include<math.h>
int main()
{
    char x[30];
    int min=123,max=64,i,s1=0,s2=0;
    scanf("%[^
]s",x);
    
    for(i=0;x[i]!=NULL;i++)
    {
            if(x[i]==' ')
              continue;
            if(x[i]>max)
              {
                max=x[i];
                s1=1;
              }
             else if(x[i]==max)
             {
                 s1++;
             }
            if(x[i]<min)
            {
              min=x[i];
              s2=1;
            }
            else if(x[i]==min)
              s2++;
       
    }
    
    printf("%c %d %c %d",(char)min,s2,(char)max,s1);
    return 0;
}