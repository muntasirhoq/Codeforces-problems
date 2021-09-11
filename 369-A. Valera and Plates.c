#include <stdio.h>

int main()
{
    int plate,bowl,days,dish,i,count=0;
    scanf("%d %d %d",&days,&bowl,&plate);

    while(days--)
    {
        scanf("%d",&dish);
        if(dish==1)
        {
            if(bowl>0)
                bowl--;
            else
            {
                count++;
            }
        }
        else
        {
            if(plate>0)
                plate--;
            else
            {
                if(bowl>0)
                    bowl--;
                else
                    count++;
            }
        }
    }

    printf("%d\n",count);

    return 0;
}
