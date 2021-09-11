#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,array[100050],i,j,k,count=1,prev,ans=1;

    cin>>n;
    cin>>array[0];

    prev=array[0];
    for(i=1;i<n;i++)
    {
        cin>>array[i];
        if(prev <=array[i])
        {
            count++;
        }
        else
        {
            count=1;
        }
        prev=array[i];
        ans=max(ans,count);
    }

    cout<<ans<<endl;

    return 0;
}
