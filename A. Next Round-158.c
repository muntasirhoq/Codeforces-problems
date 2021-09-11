#include<stdio.h>

int main()
{
    int array[100],i,count=0,N,lowPosition;

    scanf("%d %d",&N,&lowPosition);

    for(i=0;i<N;i++)
    {
        scanf("%d",&array[i]);
    }
    lowPosition--;

    for(i=0;i<N;i++)
    {
        if(array[i]>0 && array[i]>=array[lowPosition])
        {
            count++;
        }
    }

    printf("%d\n",count);

    return 0;
}
