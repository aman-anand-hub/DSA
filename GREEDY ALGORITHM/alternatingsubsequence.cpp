#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    long long t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0; i<n; i++)
        {
            cin>>a[i];
        }
        long long sum=0, p1=0, max_region;
        while (p1<n)
        {
            max_region= LONG_LONG_MIN;
            if(a[p1]<0)
            {
                while (a[p1]<0 && p1<n)
                {
                    max_region= max(max_region, a[p1]);
                    p1++;
                }
            }
            else
            {
                while (a[p1]>0 && p1<n)
                {
                    max_region= max(max_region, a[p1]);
                    p1++;
                }
            }
            sum+=max_region;
            max_region= LONG_LONG_MIN;
        }
        cout<<sum<<endl;
    }
    return 0;
}