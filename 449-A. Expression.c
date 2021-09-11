#include <stdio.h>

int main()
{
    int a,b,c,ans1,ans2,ans3,ans4,ans5,ans6;
    scanf("%d %d %d",&a,&b,&c);

    ans1=a*b*c;
    ans2=a*(b+c);
    ans3=(a+b)*c;
    ans4=a+b*c;
    ans5=a*b+c;
    ans6=a+b+c;

    ans1=ans1>=ans2?ans1:ans2;
    ans1=ans1>=ans3?ans1:ans3;
    ans1=ans1>=ans4?ans1:ans4;
    ans1=ans1>=ans5?ans1:ans5;
    ans1=ans1>=ans6?ans1:ans6;

    printf("%d\n",ans1);

    return 0;
}
