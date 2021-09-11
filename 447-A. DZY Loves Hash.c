#include <stdio.h>

int main()
{
    int p,n,i,bucket[10000],count=0,flag=0;

    for(i=0;i<10000;i++)
        bucket[i]=-1;
    scanf("%d %d",&p,&n);

    while(n--)
    {
        count++;
        scanf("%d",&i);
        if(bucket[i%p]==-1)
            bucket[i%p]=i;
        else if(flag==0)
        {
            printf("%d\n",count);
            flag=1;
        }
    }
    if(flag==1)
    {
        return 0;
    }
    printf("-1\n");

    return 0;
}
