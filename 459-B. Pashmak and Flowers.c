#include <stdio.h>

int main()
{
    long long int n,array[200005],i=0,arrayLength,count1,count2,maximum,minimum,flagForAllEqual=1;
    scanf("%lld",&n);
    arrayLength=n;

    scanf("%lld",&array[0]);
    maximum=array[0];
    minimum=array[0];

    count1=1;
    count2=1;

    for(i=1;i<n;i++)
    {
        scanf("%lld",&array[i]);
        if(array[i]==maximum)
        {
            count1++;
        }
        if(array[i]==minimum)
        {
            count2++;
        }
        if(array[i]>maximum)
        {
            maximum=array[i];
            count1=1;
        }
        if(array[i]<minimum)
        {
            minimum=array[i];
            count2=1;
        }
    }
    if(maximum==minimum)
    {
        printf("0 %lld\n",n*(n-1)/2);
    }
    else
    {
        printf("%lld %lld\n",maximum-minimum,count1*count2);
    }

    return 0;
}
