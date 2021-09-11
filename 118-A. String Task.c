#include <stdio.h>

int main()
{
    char word[120],wordNew[120];
    char *s1,*s2;
    s1=word;
    s2=wordNew;

    scanf("%s",word);

    while(*s1)
    {
        if(*s1=='A' || *s1=='E' || *s1=='I' || *s1=='O' || *s1=='U' || *s1=='a' || *s1=='e' || *s1=='i' || *s1=='o' || *s1=='u'|| *s1=='Y'|| *s1=='y')
        {
            //s1++;
        }
        else
        {
            if(*s1>=65 && *s1<=90)
            {
                printf(".%c",*s1+32);
                //s1++;
            }
            else
            {
                printf(".%c",*s1);
            }
        }
        s1++;
    }

    return 0;
}
