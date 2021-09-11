#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int i,j,ans=0,flat[100][200];

    for(i=0;i<n;i++)
    {
        for(j=0;j<2*m;j++)
        {
            cin>>flat[i][j];
        }

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*m;j+=2)
        {
            if(flat[i][j]==1 || flat[i][j+1])
            {
                ans++;
            }
        }
    }

    cout<<ans<<endl;

    return 0;
}
