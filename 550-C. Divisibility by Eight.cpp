#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[110],t;
    int n,i,ans,len;

    gets(str);
    len=strlen(str);

    for(i=0;str[i];i++)
    {
        ans=str[i]-'0';
        if(ans%8==0)
        {
            cout<<"YES"<<endl<<ans<<endl;
            return 0;
        }

        for(int j=i+1;j<len;j++)
        {
            ans=ans*10+str[j]-'0';
            if(ans%8==0)
            {
                cout<<"YES"<<endl<<ans<<endl;
                return 0;
            }
            for(int k=j+1;k<len;k++)
            {
                ans=ans*10+str[k]-'0';
                if(ans%8==0)
                {
                    cout<<"YES"<<endl<<ans<<endl;
                    return 0;
                }
                ans/=10;
            }
            ans/=10;
        }
        ans/=10;
    }

    cout<<"NO"<<endl;

    return 0;
}
