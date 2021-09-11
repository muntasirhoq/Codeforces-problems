#include <stdio.h>
#include <string.h>

int main()
{
    char input[120],newInput[120],flag=0;
    int i;

    gets(input);


    for(i=1;input[i];i++)
    {
        if(input[i]>='a' && input[i]<='z')
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        for(i=0;input[i];i++)
        {
            if(input[i]>='A' && input[i]<='Z')
            {
                input[i]+=32;
            }
            else if(input[i]>='a' && input[i]<='z')
            {
                input[i]-=32;
            }
        }

        printf("%s\n",input);
    }
    else
    {
        printf("%s\n",input);
    }

    /*if(input[0]>='a' && input[0]<='z')
    {
        input[0]-=32;

        for(i=1;input[i];i++)
        {
            if(input[i]>='A' && input[i]<='Z')
            {
                input[i]+=32;
            }
        }

        printf("%s\n",input);
    }

    else
    {
        newInput[0]=input[0];
        for(i=1;input[i];i++)
        {
            if(input[i]>='a' && input[i]<='z')
            {
                flag=1;
            }
            else
            {
                newInput[i]=input[i];
                input[i]+=32;
            }
        }
        newInput[i]='\0';

        if(flag==1)
            printf("%s\n",input);
        else
            printf("%s\n",newInput);
    }*/

    return 0;
}
