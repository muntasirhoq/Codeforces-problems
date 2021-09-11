#include <stdio.h>

int max(int a,int b)
{
    if(a>b)
        return a;
    return b;
}

int main()
{
    int i,j,k,n,array[101],count[100],m=0,ans=-99999,sum=0;

    for(i=0;i<100;i++)
        count[i]=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&array[i]);

    for(j=0;j<n;j++)
    {
        for(i=0;i<=j;i++)
        {
            sum=0;
            for(k=0;k<n;k++)
            {
                if(k>=i&&k<=j)
                {
                    sum+=(1-array[k]);
                }
                else
                    sum+=array[k];
                ans=max(sum,ans);
            }
        }
    }

    printf("%d\n",ans);

    return 0;
}
