#include <bits/stdc++.h>

using namespace std;

int c[20];

int main() {
	int n,l,r,x,L,sum,ways;

	cin>>n>>l>>r>>x;

	for(int i=0;i<n;i++)
	{
	    cin>>c[i];
	}

    L = 1 << n;
    ways = 0;
    for(int mask = 1; mask < L; mask++) {
        sum = 0;
        int d=0;
        int  z=INT_MAX, y = INT_MIN;
        for(int i = 0; i < n; i++) {
            if(mask & (1 << i)) {
                z=min(z,c[i]);
                y=max(y,c[i]);
                sum += c[i];
                d++;
            }
        }

        if( d>1 && sum>=l && sum<=r && (y-z)>=x) ways++;
    }

    printf("%d\n", ways);

	return 0;
}
