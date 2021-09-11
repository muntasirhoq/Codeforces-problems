#include <stdio.h>

int main()
{
    int n,m,a;
    long long int count=0,n1,m1;
    scanf("%d %d %d",&n,&m,&a);

    if((n%a)!=0)
        n1=(n/a)+1;
    else
        n1=n/a;
    if((m%a)!=0)
        m1=(m/a)+1;
    else
        m1=m/a;

    count=m1*n1;


    printf("%lld\n",count);


    return 0;
}
