#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char x[30],word[20],j=0,k,i,n;
    scanf("%[^
]s",x);
    n=strlen(x);
    
    for(i=0;x[i]!=NULL;i++)
    {
        if(x[i]==' ')
         {
             word[j]=NULL;
             j=0;
         }
         else
           word[j++]=x[i];
    }
    word[j]=NULL;
    
    char min=word[0];
    for(j=1;word[j]!=NULL;j++)
    {   if(tolower(min)==tolower(word[j]))
          { if(isupper(min))
             min=word[j];
             }
       else if(min>word[j])
           min=word[j];
    }
    printf("%c",min);
  
    return 0;
}
