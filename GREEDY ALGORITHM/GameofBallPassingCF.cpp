#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int main()
{
    fastio
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll arr[n],sum=0,maxi=0;
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            maxi=max(arr[i],maxi);
        }
        sum-=maxi;
        if(sum==0&&maxi==0) cout<<0<<endl;
        else
        {
            if(sum>=maxi) cout<<1<<endl;
            else cout<<maxi-sum<<endl;
        }
    }
    return 0;
}