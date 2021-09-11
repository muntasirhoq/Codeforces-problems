#include <stdio.h>
int dp[10000000];

int main()
{
    int start_index,size_of_subsequence,sum,n,m,i,j,k,flag=0;

    scanf("%d %d",&n,&m);

    for(i=0;i<n;i++)
    {
        scanf("%d",&dp[i]);
    }

    for(j=0;j<n;j++)
    {
        for(i=0;i<=j;i++)
        {
            sum=0;
            for(k=0;k<n;k++)
            {
                if(k>=i&&k<=j)
                {
                    sum+=(dp[k]);

                    if(sum%m==0)
                    {
                        printf("YES\n");
                        return 0;
                    }
                }
            }
        }
    }

    printf("NO\n");

    return 0;
}
