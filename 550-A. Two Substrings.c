#include <stdio.h>
#include <string.h>

int main()
{

    char s[100000];
    int i,count=0,count1=0,flag=0;

    gets(s);

    for(i=0;s[i];i++)
    {
        if(s[i]=='A' && s[i+1]=='B')
        {
            count=1;
            break;
        }
        if(s[i]=='B' && s[i+1]=='A')
        {
            count=2;
            break;
        }
    }
    if(count==0)
    {
        printf("NO\n");
        flag=1;
    }




    else
    {
        i+=2;
        if(count==1)
        {
            for(;s[i];i++)
            {
                if(s[i]=='B' && s[i+1]=='A')
                {
                    count1=2;
                    break;
                }
            }
         //   if(count1==0)
           //     printf("NO\n");
            //else
            if(count1==2)
            {
                printf("YES\n");
                flag=1;
            }

        }
        else if(count==2)
        {
            for(;s[i];i++)
            {
                if(s[i]=='A' && s[i+1]=='B')
                {
                    count1=1;
                    break;
                }
            }
          //  if(count1==0)
            //    printf("NO\n");
           // else
           if(count1==1)
           {
               printf("YES\n");
                flag=1;
           }

        }
    }

    if(count1==0)
    {
        for(i=0;s[i];i++)
        {
            if(s[i]=='A' && s[i+1]=='B' && count==2)
            {
                count=1;
                break;
            }
            if(s[i]=='B' && s[i+1]=='A' && count==1)
            {
                count=2;
                break;
            }
        }
        i+=2;
        if(count==1)
        {
            for(;s[i];i++)
            {
                if(s[i]=='B' && s[i+1]=='A')
                {
                    count1=2;
                    break;
                }
            }
            if(count1==0)
                printf("NO\n");
            else
                printf("YES\n");
            flag=1;
        }
        else if(count==2)
        {
            for(;s[i];i++)
            {
                if(s[i]=='A' && s[i+1]=='B')
                {
                    count1=1;
                    break;
                }
            }
            if(count1==0)
                printf("NO\n");
            else
                printf("YES\n");
            flag=1;
        }
    }

    if(flag==0)
        printf("NO\n");



    return 0;
}
