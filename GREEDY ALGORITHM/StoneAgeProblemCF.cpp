#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,q; cin>>n>>q;
    ll v[n+1];
    ll ans=0;
    for(ll i=1;i<=n;i++)
    {
        cin>>v[i];
        ans+=v[i];
    }
    map<ll,ll> m;
    ll x,y,z;
    ll current=-1;
    while(q--)
    {
        cin>>x;
        if(x==2)
        {
            cin>>z;
            ans=n*z;
            cout<<ans<<endl;
            m.clear();
            current=z;
        }
        else
        {
            cin>>y>>z;
            if(current==-1)
            {
                ans-=v[y];
                ans+=z;
                v[y]=z;
                cout<<ans<<endl;
            }
            else
            {
                if(m[y]==0)
                {
                    ans-=current;
                    ans+=z;
                    cout<<ans<<endl;
                    m[y]=z;
                }
                else
                {
                    ans-=m[y];
                    ans+=z;
                    m[y]=z;
                    cout<<ans<<endl;
                }
            }
        }
    }
}