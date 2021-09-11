#include <stdio.h>

int main()
{
    int n,array[1000],i,j,difference,array2[1000],index=0;

    scanf("%d",&n);

    int final[n-2];

    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }


    for(i=1;i<n-1;i++)
    {
        difference=-1;
        for(j=1;j<n;j++)
        {
            if(j==i)
            {
                continue;
            }
            if((j-1)==i)
            {
                if(difference<array[j]-array[j-2])
                {
                    difference=array[j]-array[j-2];
                }
            }
            else
            {
                if(difference<array[j]-array[j-1])
                {
                    difference=array[j]-array[j-1];
                }
            }
        }

        final[index++]=difference;

    }
    difference=final[0];

    for(i=1;i<index;i++)
    {
        if(difference>final[i])
            difference=final[i];
    }
    printf("%d\n",difference);

    return 0;
}
