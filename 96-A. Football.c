#include <stdio.h>
#include <string.h>

int main()
{
    int i,count=1;
    char string[1000],temp;

    gets(string);
    temp=string[0];

    for(i=1;string[i];i++)
    {
        if(string[i]==temp)
        {
            count++;
            if(count==7)
            {
                printf("YES\n");
                return 0;
            }
        }
        else
        {
            count=1;
            temp=string[i];
        }
    }
    printf("NO\n");


    return 0;
}
