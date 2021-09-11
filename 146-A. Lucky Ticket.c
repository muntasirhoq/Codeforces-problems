#include <stdio.h>
#include <string.h>

int main()
{
    char string[80];
    int i,array[80],flag=0,add1=0,add2=0,n;

    scanf("%d",&n);
    getchar();
    gets(string);

    for(i=0;string[i];i++)
    {
        array[i]=string[i]-'0';
        if(array[i]!=4 && array[i]!=7)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
        printf("NO\n");

    else
    {

        for(i=0;i<n/2;i++)
        {
            add1+=array[i];
        }
        for(;i<n;i++)
        {
            add2+=array[i];
        }

        if(add1==add2)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
