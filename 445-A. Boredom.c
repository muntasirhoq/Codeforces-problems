#include <stdio.h>

long long int array[1000000],best=0,dp[1000000];

long long int max(long long int a,long long int b)
{
    if(a>b)
        return a;
    return b;
}

long long int boredom(int n)
{
    if (n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return array[1];
    }

    else if(n>=2)
    {
        if(dp[n-1]==-1)
        {
            dp[n-1]=boredom(n-1);
        }
        if(dp[n-2]==-1)
        {
            dp[n-2]=boredom(n-2);
        }

        return max( array[n]*n+dp[n-2],dp[n-1] );
    }
}

int main()
{
    int i,n,m=0;
    scanf("%d",&n);
    for(i=0;i<1000000;i++)
   {
       dp[i]=-1;
       array[i]=0;
   }

    for(i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        array[a]++;
        if(m<a)
            m=a;
    }

    best=boredom(m);
    printf("%lld\n",best);

    return 0;
}
