#include <bits/stdc++.h>

using namespace std;

int boy[150],girl[150];


void swap(int i,int j, int *a){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void quicksort(int *arr, int left, int right){
    int min = (left+right)/2;

    int i = left;
    int j = right;
    int pivot = arr[min];

    while(left<j || i<right)
    {
        while(arr[i]<pivot)
        i++;
        while(arr[j]>pivot)
        j--;

        if(i<=j){
            swap(i,j,arr);
            i++;
            j--;
        }
        else{
            if(left<j)
                quicksort(arr, left, j);
            if(i<right)
                quicksort(arr,i,right);
            return;
        }
    }
}

int main()
{
    int n,m,length,i,j,pair=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>boy[i];
    }
    cin>>m;

    for(i=0;i<m;i++)
    {
        cin>>girl[i];
    }

    quicksort(boy,0,n-1);
    quicksort(girl,0,m-1);

    if(n<m)
    {
        int k;
        for(i=0;i<n;i++)
        {
            for(k=0;k<m;k++)
            {
                if( boy[i]==girl[k] || abs(boy[i]-girl[k])==1)
                {
                    pair++;
                    girl[k]=-10000;
                    break;
                }
            }

        }
        cout<<pair<<endl;
    }

    else
    {
        int k;
        for(i=0;i<m;i++)
        {
            for(k=0;k<n;k++)
            {
                if( boy[k]==girl[i] || abs(boy[k]-girl[i])==1)
                {
                    pair++;
                    boy[k]=-10000;
                    break;
                }
            }

        }
        cout<<pair<<endl;
    }



    return 0;
}
