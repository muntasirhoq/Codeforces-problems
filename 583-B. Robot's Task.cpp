#include <bits/stdc++.h>

using namespace std;

int list1[1500],n,info=0;

int searchRight(int minPos)
{
    int i;
    for(i=minPos+1;i<n;i++)
    {
        if(list1[i]<=info)
        {
            info++;
            list1[minPos]=99999999;
            return i;
        }
    }
    return -1;
}

int searchLeft(int minPos)
{
    int i;
    for(i=minPos-1;i>=0;i--)
    {
        if(list1[minPos]<=info)
        {
            info++;
            list1[i]=99999999;
            return i;
        }
    }
    return -1;
}

int main()
{
    int i,j,ans=0,direction=1,min=99999999,minPos=-1;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>list1[i];
        if(list1[i]<min)
        {
            min=list1[i];
            minPos=i;
        }
    }
    info++;

    while(info<n)
    {
        if(direction==1)
        {
            int a=searchRight(minPos);
            if(a==-1)
            {
                direction=-1;
                ans++;
            }
            else
            {
                minPos=a;
            }
        }

        else if(direction==-1)
        {
            int a=searchLeft(minPos);
            if(a==-1)
            {
                direction=1;
                ans++;
            }
            else
            {
                minPos=a;
            }
        }

        printf("info= %d direction =%d ans= %d minPos= %d\n",info,direction,ans,minPos);
    }

    cout<<ans<<endl;


    return 0;
}
