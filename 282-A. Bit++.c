#include <stdio.h>
#include <string.h>

int main()
{
    char string[4][5]={"X++","++X","--X","X--"},input[5];
    int n,x=0;
    scanf("%d",&n);
    getchar();

    while(n--)
    {
        gets(input);
        if(strcmp(input,string[0])==0 || strcmp(input,string[1])==0)
        {
            x++;
        }
        else if(strcmp(input,string[2])==0 || strcmp(input,string[3])==0)
        {
            x--;
        }
    }

    printf("%d\n",x);

    return 0;
}
