#include <bits/stdc++.h>

using namespace std;
#define MAX_SIZE 10000000

int input[MAX_SIZE],T[MAX_SIZE],R[MAX_SIZE],len=0,topT=0;//len variable tai eta;
long long int n;

int search(int m)
{
    int i;
    for(i=1;i<=topT;i++)
    {
        if(m<=input[T[i]])
        {
            return i;
        }
    }
}

void printT()
{
    int i;
    for(i=0;i<=topT;i++)
    {
        cout<<input[T[i]]<<" ";
    }
    cout<<endl;
}

int main()
{
    int a,b,i,j,t;

    for(i=0;i<MAX_SIZE;i++)
    {
        R[i]=-1;
    }
    cin>>b>>t;
    n=t*b;

    for(i=0;i<b;i++)
    {
        cin>>input[i];
    }

    for(i=b;i<n;i++)
    {
        input[i]=input[i%b];
    }

    T[0]=0;

    for(i=1;i<n;i++)
    {
        if(input[i]<input[T[0]])
        {
            T[0]=i;
        }
        else if(input[i]>=input[T[topT]])
        {

            T[++topT]=i;
            R[i]=T[topT-1];

        }
        else
        {
            a=search(input[i]);
            T[a]=i;
            R[i]=T[a-1];
        }
    }

    cout<<topT+1<<endl;

    return 0;
}
