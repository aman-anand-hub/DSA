#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
const int maxn=2*1e5+1;
map<char,int> mp;
int main()
{
    fastio
    ll x;
    string s;
    for (ll i = 0; i <26; i++)
    {
        cin>>x;
        mp[i+97]=x;
    }
    cin>>s;
    unordered_map<ll,ll> mp1[27];
    ll prefsum[s.length()], res=0;
    prefsum[0]= mp[s[0]];
    mp1[s[0]-97][prefsum[0]]++;
    for (ll i=1;i<s.length();i++)
    {
        prefsum[i]=prefsum[i-1]+mp[s[i]];
        if(mp1[s[i]-97].find(prefsum[i-1])!=mp1[s[i]-97].end())
        {
            res+=mp1[s[i]-97][prefsum[i-1]];
        }
        mp1[s[i]-97][prefsum[i]]++;
    }
    cout<<res<<endl;
    return 0;
}