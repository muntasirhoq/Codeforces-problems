#include<bits/stdc++.h>

using namespace std;

long long int dp[1000][1000];

void initializeDp()
{
    int i,j;
    for(i=0;i<1000;i++)
    {
        for(j=0;j<1000;j++)
            dp[i][j]=-1;
    }
}

long long int nCr(int n,int r)
{
    if(r==1) return n;
    if(n==r) return 1;
    if(dp[n][r]!=-1)
        return dp[n][r];
    else
    {
        dp[n][r]=nCr(n-1,r)+nCr(n-1,r-1);
        return dp[n][r];
    }
}

int main()
{
    char s1[20],s2[20],s3[20];
    int i,j,s1Position=0,s2Position=0,temp,plusOne=0,flag=1,numOfQues=0,diff;
    double ans,a;

    initializeDp();

    cin>>s1>>s3;

    j=0;

    for(i=0;s1[i];i++)
    {
        if(s1[i]=='+')
            s1Position++;
        else
            s1Position--;

        if(s3[i]=='+')
        {
            s2Position++;
            s2[j++]='+';
        }
        else if(s3[i]=='-')
        {
            s2Position--;
            s2[j++]='-';
        }
    }

    for(;j<i;j++)
    {
        flag=0;
        s2[j]='?';
        numOfQues++;
    }
    s2[j]='\0';

    if(flag==1)
    {
        if(s2Position==s1Position)
        {
            ans=1;
            printf("%0.12lf\n",ans);
            return 0;
        }
        else
        {
            ans=0;
            printf("%0.12lf\n",ans);
            return 0;
        }
    }

    diff=s1Position-s2Position;

    if( abs(s1Position-s2Position)>numOfQues )
    {
        ans=0;
        printf("%0.12lf\n",ans);
        return 0;
    }




    ans=nCr(numOfQues,plusOne);
    a=pow(2.0,numOfQues);
    ans=ans/a;

    return 0;
}
