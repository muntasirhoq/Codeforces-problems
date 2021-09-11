#include<stdio.h>

int main()
{
    while(1){
    int n,d,e,f,count=1,array[2],i=0,m;
    scanf("%d %d %d %d",&n,&d,&e,&f);

    array[2]= (d>=e)? ((d>=f)?d:f) : ((e>=f)?e:f);
    array[1]= (d<=e)? ((d<=f)?d:f) : ((e<=f)?e:f);
    array[0]=d+e+f-array[2]-array[1];

    while(n!=0)
    {
        if(n-array[i]<0)
        {
            i++;
            count--;
            n+=array[i-1];
        }
        else
        {
            count++;
            n-=array[i];
        }
    }




    printf("%d\n",count);
    }
    return 0;
}
