#include <stdio.h>
#include <string.h>

int main()
{
    int array[300],i,len,count=0;
    char input[200];

    for(i='a';i<='z';i++)
    {
        array[i]=0;
    }
    gets(input);
    len=strlen(input);

    for(i=0;i<len;i++)
    {
        if( array[input[i]] == 0 )
        {
             count++;
             array[input[i]]++;
        }
    }

    if(count%2==0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");

    return 0;
}
