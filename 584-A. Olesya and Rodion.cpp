#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,num=0;
    char ans[110];

    cin>>n>>t;

    if(t==10)
    {
        if(n==1)
        {
            num=-1;
            ans[0]='-';
            ans[1]='1';
            ans[2]='\0';
        }
        else
        {
            int i;
            for(i=0;i<n-1;i++)
            {
                //num=num*10+1;
                ans[i]='1';
            }
           // num=num*10;
           ans[i++]='0';
           ans[i]='\0';
        }
    }

    else
    {
        int i;
        for(i=0;i<n;i++)
        {
            //num=num*10+t;
            ans[i]=t+'0';
        }
        ans[i]='\0';
    }

    cout<<ans<<endl;
    return 0;
}
