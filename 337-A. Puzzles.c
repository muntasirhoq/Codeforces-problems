#include <stdio.h>

int main()
{
    int list[100],j,n,m,i,temp,diff=0,pos=0,prevDiff=999999999;
    scanf("%d %d",&n,&m);

    for(i=0;i<m;i++)
    {
        scanf("%d",&list[i]);
    }

    for(i=0;i<m-1;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(list[j]<list[i])
            {
                temp=list[j];
                list[j]=list[i];
                list[i]=temp;
            }
        }
    }

    for(i=0;i<=m-n;i++)
    {
        diff=list[i+n-1]-list[i];
        if(diff<prevDiff)
        {
            prevDiff=diff;
            pos=i;
        }
    }

    printf("%d\n",prevDiff);

    return 0;
}
