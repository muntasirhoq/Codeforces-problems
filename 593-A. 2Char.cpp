#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,j,charCount[255];
    char str[100][1010];

    for(i=0;i<255;i++)
    {
        charCount[i]=0;
    }
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>str[i];

        for(j=0;str[i][j];j++)
        {
            charCount[str[i][j]]++;
        }
    }

    int maxi=charCount[0],maxi2;

    for(i=1;i<255;i++)
    {
        maxi=max(maxi,charCount[i]);
    }
    maxi2=maxi;
    j=maxi;

    maxi=charCount[0];

    for(i=1;i<255;i++)
    {
        if(charCount[i]==j)
        {
            j=-1;
            continue;
        }
        maxi=max(maxi,charCount[i]);
    }
    cout<<maxi+maxi2<<endl;


    return 0;
}
