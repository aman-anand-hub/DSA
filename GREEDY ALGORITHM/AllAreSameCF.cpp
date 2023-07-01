#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    fastio
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        vector<int> g;
        for(int i=n-1;i>0;i--)
        {
            if(v[i]!=v[0])
            {
                int d=v[i]-v[0];
                g.push_back(d);
            }
        }
        int ans=0;
        for(int i=0;i<g.size();i++)
        {
            ans=__gcd(ans,g[i]);
        }
        if(ans==0) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}