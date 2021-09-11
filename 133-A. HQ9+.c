#include <stdio.h>
#include <string.h>


int main()
{
    char in[150];
    int flag=0,i;

    gets(in);

    for(i=0;in[i];i++)
    {
        if(in[i]=='H' || in[i]=='Q' || in[i]=='9')
        {
            printf("YES\n");
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("NO\n");


    return 0;
}
