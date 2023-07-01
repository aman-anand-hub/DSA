#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
signed main()
{
    fastio
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> v(n),s(n);
        for (int i = 0; i <n; i++)
        {
            int a; cin>>a;
            v[i]=s[i]=a;
        }
        sort(s.begin(),s.end());
        if(v==s)
        {
            cout<<0<<endl;
        }
        else
        {
            int it=1;
            while (v!=s)
            {
                if(it%2!=0)
                {
                    for (int i = 0; i < n-1; i=i+2)
                    {
                        if(v[i]>v[i+1]) 
                        {
                            swap(v[i],v[i+1]);
                        }
                    }
                }
                else
                {
                    for (int i = 1; i <=n-1; i=i+2)
                    {
                        if(v[i]>v[i+1])
                        {
                            swap(v[i],v[i+1]);
                        }
                    }
                }
                it++;
            }
            cout<<it-1<<endl;
        }
    }
}