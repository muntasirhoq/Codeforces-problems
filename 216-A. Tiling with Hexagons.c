#include <stdio.h>

int main()
{
    int a ,b,c,answer=0;
    scanf("%d %d %d",&a,&b,&c);

    printf("%d\n",(a-2)*3+(b-2)*(a+1)+(c-2)*(a+b-1)+7);

    return 0;
}
