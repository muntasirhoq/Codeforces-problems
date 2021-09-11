#include <bits/stdc++.h>

using namespace std;

int n=1000000007;

long long int bigMod(int a,int b)
{
    long long int x;
    if(b==0)
        return 1%n;
    if(b%2==0)
    {
        x=bigMod(a,b/2);
        return (x*x)%n;
    }
    else
    {
        x=( bigMod(a,b-1)*a )%n;
        return x;
    }
}

int main()
{
    long long int ans;
    int c;

    cin>>c;

    ans=( bigMod(27,c)-bigMod(7,c) )%n;
    if(ans<0)
        ans+=n;

    cout<<ans<<endl;

    return 0;
}
