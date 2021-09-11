#include <stdio.h>
#include <string.h>

int main()
{
    char input[10000];
    int i;

    gets(input);

    if(input[0]>='a' && input[0]<='z')
        input[0]-=32;

    puts(input);


    return 0;
}
