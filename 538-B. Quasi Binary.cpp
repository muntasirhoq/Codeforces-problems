#include <bits/stdc++.h>

using namespace std;

bool bin(int n1)
{
    int n=n1;
    if(n==0)
        return true;
    while(n!=0)
    {
        if(n%10==0 || n%10==1)
        {
            n/=10;
            continue;
        }
        else
            return false;
    }
    return true;
}

int main()
{
    int n,i,j=0,k,ans,sum,count=0,digit,highestBin=0,a=10,n1,binaryList[100000];

    cin>>n;
    n1=n;

    while( !bin(n1) )
    {
        highestBin=0;
        digit=log10(n1)+1;

        for(i=0;i<digit;i++)
        {
            highestBin=(highestBin*a)+1;
        }

        count+=n1/highestBin;
        n1=n1%highestBin;

        for(;j<count;j++)
        {
            binaryList[j]=highestBin;
        }
    }

    if(n1!=0)
    {
        count++;
        binaryList[count-1]=n1;
    }
    cout<<count<<endl;

    for(i=count-1;i>=0;i--)
    {
        cout<<binaryList[i]<<" ";
    }
    cout<<endl;

    return 0;
}
