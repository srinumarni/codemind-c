#include<stdio.h>
int main()
{
    char ch[100],count=0,i;
    scanf("%[^
]s",ch);
    
    for(i=0;ch[i]!=NULL;i++)
      {
          if(ch[i]==' ')
             count++;
      }
      printf("%d",count+1);
      return 0;
}