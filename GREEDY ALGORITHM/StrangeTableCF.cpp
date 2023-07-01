#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
void solve()
{
    ll n,m,x;
    cin>>n>>m>>x;
    ll a=(x-1)%n;
    ll b=(x-1)/n;
    ll ans=m*a+(b+1);
    cout<<ans<<endl;
}
int main()
{
    fastio
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}