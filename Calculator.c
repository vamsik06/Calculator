#include <stdio.h>
int main()
{
    int n,first,second,e;
    char character=0;
    do
    {
        scanf("%d %d",&first,&second);
        scanf(" %c",&character);
        if(character==43)
        {
            n=first+second;
            printf("%d\n",n);
        }
        else if(character==45)
        {
            n=first-second;
            printf("%d\n",n);
        }
        else if(character==42)
        {
            n=first*second;
            printf("%d\n",n);
        }
        else if(character==47)
        {
            n=first/second;
            printf("%d\n",n);
        }
        printf("if you want to exist enter -1\n");
    }
    while(e!=-1);
        {
            scanf("%d",&e);
            printf("%d",e);
        }
    }

