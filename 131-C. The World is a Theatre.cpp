#include <bits/stdc++.h>

using namespace std;

long long int dp[100][100];

void initializeDP()
{
    int i,j;
    for(i=0;i<100;i++)
    {
        for(j=0;j<100;j++)
        {
            dp[i][j]=-1;
        }
    }
}

long long int comb(long long int n,long long int r)
{
    if(r==1)
        return n;
    if(n==r)
        return 1;

    if(dp[n][r]!=-1)
        return dp[n][r];

    else
    {
        dp[n][r]=comb(n-1,r)+comb(n-1,r-1);
        return dp[n][r];
    }
}

int main()
{
    long long int n,m,t,i,j,ans=0;
    initializeDP();

    cin>>n>>m>>t;

    for(i=4;i<=n;i++)
    {
        j=t-i;
        if(j>m || j<=0)
            continue;
        ans=ans+ (comb( n,i )*comb(m,j));
    }

    cout<<ans<<endl;

    return 0;
}
