#include <stdio.h>

int main()
{
    long long int Ax,Ay,Bx,By,Cx,Cy,ABx,ABy,BCx,BCy,temp;
    scanf("%lld %lld %lld %lld %lld %lld",&Ax,&Ay,&Bx,&By,&Cx,&Cy);

    ABx=Bx-Ax;
    ABy=By-Ay;
    BCx=Cx-Bx;
    BCy=Cy-By;

    temp=ABx*BCy-ABy*BCx;

    if(temp==0)
        printf("TOWARDS\n");
    else if(temp<0)
        printf("RIGHT\n");
    else
        printf("LEFT\n");

    return 0;
}
