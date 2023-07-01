#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio();cin.tie(0);cout.tie(0);
int main()
{
    fastio
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        map<int,int> mp;
        int swap_count=INT_MIN;
        for(int i=0;i<n;i++)
        {
            mp[v[i]]++;
            swap_count=max(swap_count,mp[v[i]]);
        }
        int ans=0;
        bool already_done=false; // if it is true return 1
        if(swap_count==n) already_done=true;
        n-=swap_count;
        while(n>0)
        {
            ans++;
            if(n>=swap_count)
            {
                n-=swap_count;
                ans+=swap_count;
            }
            else if(n<swap_count)
            {
                ans+=n;
                n-=swap_count;
            }
            swap_count*=2;
        }
        if(already_done) cout<<0<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}