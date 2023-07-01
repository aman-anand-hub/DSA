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
        vector<int> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        ll count=0, step=0, i=n-1, x=v[n-1];
        while(i>=0)
        {
            while(x==v[i] && i>=0)
            {
                count++, i--;
            }
            if(i<0) break;
            step++;
            i-=count;
            count=count*2;
        }
        cout<<step<<endl;
    }
    return 0;
}