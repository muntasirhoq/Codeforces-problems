#include <bits/stdc++.h>

using namespace std;

bool can(int m, int s)
{
    return s >= 0 && s <= 9 * m;
}

int main()
{
    int m,s;
    string minn,maxx;
    cin>>m>>s;

    if (s==0 && m!=1)
        {cout<<"-1 -1"<<endl;
        return 0;}

    int sum = s;
    for (int i = 0; i < m; i++)
        for (int d = 0; d < 10; d++)
            if ((i > 0 || d > 0 || (m == 1 && d == 0)) && can(m - i - 1, sum - d))
            {
                minn += char('0' + d);
                sum -= d;
                break;
            }
    sum=s;
    for (int i = 0; i < m; i++)
        for (int d = 9; d >= 0; d--)
            if ((i > 0 || d > 0 || (m == 1 && d == 0)) && can(m - i - 1, sum - d))
            {
                maxx += char('0' + d);
                sum -= d;
                break;
            }

    if(minn=="")
    {
        cout<<"-1 -1"<<endl;
        return 0;
    }

    cout<<minn<<" "<<maxx<<endl;
    return 0;
}
