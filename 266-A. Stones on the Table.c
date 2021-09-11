#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,count=0;
    char string[60];

    scanf("%d",&n);
    getchar();
    gets(string);

    for(i=0;i<n-1;i++)
    {
        if(string[i]==string[i+1])
        {
            count++;
        }
    }

    printf("%d\n",count);

    return 0;
}
