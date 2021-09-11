#include <bits/stdc++.h>

using namespace std;

struct kefa
{
    long long int m,s;
}array[100050];

bool comp(kefa a, kefa b) {
  return a.m < b.m;
}

int main()
{
    long long int n,d,i,j,k,temp,factor=0,ans=-9999,length=0;
    cin>>n>>d;


    for(i=0;i<n;i++)
    {
        cin>>array[i].m>>array[i].s;
    }

    sort(array, array+n, comp);


    for(i=0;i<n;i++)
    {
        if (i==0)
            factor=array[i].s;
        else
            factor-=array[i-1].s;
        for(j=length+1;j<n;j++)
        {
            if(array[j].m-array[i].m<d)
            {
                factor+=array[j].s;
            }
            else
            {
                break;
            }
        }
        length=j-1;
        ans=max(ans,factor);
    }
    cout<<ans<<endl;

    return 0;
}
