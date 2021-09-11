#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int remainder,mainNum,i,num,divisorArray[100000],count=0,sq,j=0;
    scanf("%d %d",&mainNum,&remainder);

    num=mainNum-remainder;

    if(mainNum==remainder)
    {
        printf("infinity\n");
    }
    else if(mainNum==0)
        printf("0\n");

    else
    {
        sq=(int)sqrt(num);
        for(i=1;i<=sq;i++)
        {
            if( (num%i)==0 && num/i!=i )
            {
                divisorArray[j]=i;
                j++;
                divisorArray[j]=num/i;
                j++;
            }
            else if( (i*i)==num )
            {
                divisorArray[j]=i;
                j++;
            }
        }

        for(i=0;i<j;i++)
        {
            if(divisorArray[i]>remainder)
            {
                count++;
            }
        }

        printf("%d\n",count);

    }

    return 0;
}
