#include <bits/stdc++.h>

using namespace std;

int dp[100050],length=0;
char str[100050];

int sum(int a)
{
    if(dp[a]!=-1)
        return dp[a];

    int b=0;
    b+=dp[length+1];

    for(int i=length+1;i<a;i++)
    {
        if(str[i-1]==str[i])
            b++;
        dp[i+1]=b;
        length++;
    }
    return dp[a];
}

int main()
{
    int i,j,ans,m,l,r,query,p;
    dp[0]=0;
    dp[1]=0;
    for(i=2;i<100050;i++)
        dp[i]=-1;

    cin>>str;
    cin>>query;

    for(p=0;p<query;p++)
    {
        cin>>l>>r;
        ans=sum(r)-sum(l);

        cout<<ans<<endl;
    }


    return 0;
}
