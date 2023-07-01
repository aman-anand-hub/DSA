#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int main()
{
    fastio;
    int t; cin>>t;
    while(t--)
    {
        set<ll> s;
        ll n; cin>>n;
        for(int i=1;i*i<=n;i++) s.insert(i*i);
        for(int i=1;i*i*i<=n;i++) s.insert(i*i*i);
        cout<<s.size()<<endl;
    }
    return 0;
}