#include <stdio.h>
#include <string.h>

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        char string[500];
        int i,length;

        scanf("%s",string);

        length=strlen(string);

        if(length>10)
        {
            printf("%c%d%c\n",string[0],length-2,string[length-1]);
        }

        else
            printf("%s\n",string);
    }


    return 0;
}
