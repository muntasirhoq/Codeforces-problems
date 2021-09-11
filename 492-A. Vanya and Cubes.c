#include<stdio.h>

int main()
{
    int num,level=0,cubeInLevel=0;
    scanf("%d",&num);

    while(num>0)
    {
        level++;
        cubeInLevel+=level;
        num-=cubeInLevel;

        if( num<( cubeInLevel+(level+1) ) )
        {
            break;
        }
    }

    printf("%d\n",level);

    return 0;
}
