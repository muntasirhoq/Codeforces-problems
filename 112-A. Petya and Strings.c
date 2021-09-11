#include <stdio.h>
#include <string.h>
#include<ctype.h>


int main()
{
    char string1[150],string2[150];
    int i,flag=0;
    gets(string1);
    gets(string2);

    for(i=0;string1[i];i++)
    {
        if(string1[i]>='A' && string1[i]<='Z')
        {
            string1[i]=string1[i]+32;
        }
        if(string2[i]>='A' && string2[i]<='Z')
        {
            string2[i]=string2[i]+32;
        }

        if(string1[i]>string2[i])
        {
            flag=1;
            break;
        }
        if(string1[i]<string2[i])
        {
            flag=-1;
            break;
        }
    }

    printf("%d\n",flag);

    return 0;
}
