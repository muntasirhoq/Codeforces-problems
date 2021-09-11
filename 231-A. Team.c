#include <stdio.h>

int main()
{
    int test,count=0;
    scanf("%d",&test);

    while(test--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if((a+b+c)>=2)
        {
            count++;
        }

    }

    printf("%d\n",count);
    return 0;
}
