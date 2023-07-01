#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

int main()
{
    fastio
    ll t; cin>>t;
    while (t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        map<char,int> m;
        for(ll i=0; i<26;i++)
        {
            m[s1[i]]=i;
        }
        ll ans=0;
        for(ll i=0;i<s2.length()-1;i++)
        {
            ans=ans+abs(m[s2[i+1]]-m[s2[i]]);
        }
        cout<<ans<<endl;
    }
    return 0;
}