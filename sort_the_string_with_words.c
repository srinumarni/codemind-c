#include<stdio.h>
#include<string.h>

int main()
{
    char x[20][20],s[50],word[20];
    int i,k=0,j=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==' ')
        {
            word[j]=NULL;
            j=0;
           strcpy(x[k++],word);
        }
        else
         {
             word[j++]=s[i];
         }
    }
    word[j]=NULL;
    strcpy(x[k++],word);
     
    for(i=0;i<k;i++)
    {
        for(j=0;j<k-i-1;j++)
        {
                    if(strcmp(x[j],x[j+1])>0)
                    {
                       char temp[20];
                       strcpy(temp,x[j]);
                       strcpy(x[j],x[j+1]);
                       strcpy(x[j+1],temp);
                    }
                
            
        }
    }
    for(i=0;i<k;i++)
    printf("%s ",x[i]);
    
    return 0;
}
