#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
void solve()
{
    ll n; cin>>n;
    ll arr[n];
    map<ll,ll> mp;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        mp[arr[i]]++;
    }
    ll ans=0;
    ll need=(2*sum)/n;
    if((2*sum)%n!=0)
    {
        cout<<0<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        ll req=need-arr[i];
        ans+=mp[req];
        if(arr[i]==req) ans-=1;
    }
    cout<<ans/2<<endl;
}
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}