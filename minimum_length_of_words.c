#include<stdio.h>
int main()
{
    char ch[100],i,count=0,min=99;
    scanf("%[^
]s",ch);
    
    for(i=0;ch[i]!=NULL;i++)
      {
          if(ch[i]==' ')
          {
              if(count<min)
                min=count;
                count=0;
          }
          else
             count++;
      }
      if(count<min)
        min=count;
      printf("%d",min);
      return 0;
}