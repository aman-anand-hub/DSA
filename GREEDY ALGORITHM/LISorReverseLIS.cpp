#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    fastio
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            mp[x]++;
        }
        int ans=0;
        int count_one=0;
        for(auto it:mp)
        {
            if(it.second>=2) ans++;
            else count_one++;
        }
        if(count_one>0)
        {
            ans++;
            count_one--;
        }
        ans+=(count_one/2);
        cout<<ans<<endl;
    }
}