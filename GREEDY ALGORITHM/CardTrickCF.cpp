#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        ll m; cin>>m;
        vector<ll> b(m);
        ll sum=0;
        for(ll i=0;i<m;i++)
        {
            cin>>b[i];
            sum+=b[i];
        }
        ll idx=sum%n;
        cout<<v[idx]<<endl;
    }
    
}