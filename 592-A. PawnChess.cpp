#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[8][10];
    int i,j;
    for(i=0;i<8;i++)
    {
        cin>>str[i];
    }

    for(i=0 , j=7;i<8&&j>=0;i++,j--)
    {
        for(int k=0 ; k<8 ; k++)
        {

            if( str[i][k]=='W')
            {
                int x;
                for(x=i-1;x>=0;x--)
                {
                    if(str[x][k]=='B' || str[x][k]=='W')
                    {
                        break;
                    }
                }
                if(x==-1)
                {
                    cout<<"A"<<endl;
                    return 0;
                }
            }
        }
        for(int k=0;k<8;k++)
        {
            if( str[j][k]=='B' )
            {
                int x;
                for( x=j+1;x<8;x++)
                {
                    if(str[x][k]=='W' || str[x][k]=='B')
                    {
                        break;
                    }
                }
                if(x==8)
                {
                    cout<<"B"<<endl;
                    return 0;
                }
            }
        }
    }

    return 0;
}
