#include <stdio.h>
#include <string.h>

int main()
{
    int array[4],i,t=0,len;
    char input[120],output[120];

    array[1]=0;
    array[3]=0;
    array[2]=0;

    gets(input);
    len=strlen(input);

    for(i=0;i<len;i+=2)
    {
        if(input[i]=='1')
            array[1]++;
        else if(input[i]=='2')
            array[2]++;
        else
            array[3]++;
    }

    for(;array[1];)
    {
        if(t)
        printf("+");
        array[1]--;
        printf("1");
        t=1;
    }

    for(;array[2];)
    {
        if(t)
        printf("+");
        array[2]--;
        printf("2");
        t=1;
    }

    for(;array[3];)
    {
        if(t)
        printf("+");
        array[3]--;
        printf("3");
        t=1;
    }

    printf("\n");

    return 0;
}
