#include <stdio.h>

int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);

}

int main()
{
    int a,b,n;
    scanf("%d %d %d",&a,&b,&n);

    for(;;)
    {
        if(n<gcd(a,n))
        {
            printf("1\n");
            break;
        }
        n-=gcd(a,n);

        if(n<gcd(b,n))
        {
            printf("0\n");
            break;
        }
        n-=gcd(b,n);
    }

    return 0;
}

