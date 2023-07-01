#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int main()
{
    fastio
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        string s; cin>>s;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        int pairs=0,single=0,ans=0;
        for(auto i:mp)
        {
            pairs+=i.second/2;
            single+=i.second%2;
        }
        ans=ans+(pairs/k)*2;
        single=single+(pairs-(pairs/k)*k)*2;
        if(single>=k) ans++;
        cout<<ans<<endl;
    }
    return 0;
}