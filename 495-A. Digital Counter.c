#include<stdio.h>
int main()
{
    int n,result,remainder;
    int ar[10]={2,7,2,3,3,4,2,5,1,2};
    scanf("%d",&n);
    result=n/10;
    remainder=n%10;
    printf("%d",ar[result]*ar[remainder]);
    return 0;
}
