#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while (t--)
    {
        long long n; cin>>n;
        long long a[n];
        for (long long i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        long long sum=0, p1=0;
        set <long long> s;
        while (p1<n)
        {
            if(a[p1]<0)
            {
                while (a[p1]<0 && p1<n)
                {
                    s.insert(a[p1]);
                    p1++;
                }
            }
            else
            {
                while (a[p1]>0 && p1<n)
                {
                    s.insert(a[p1]);
                    p1++;
                }
            }
            auto it= s.rbegin();
            sum+=*it;
            s.clear();
        }
        cout<<sum<<endl;
    }
    return 0;
}