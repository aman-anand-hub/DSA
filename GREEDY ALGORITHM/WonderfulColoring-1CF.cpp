#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    fastio
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        unordered_map<char,int> map;
        for(int i=0;i<s.length();i++) map[s[i]]++;
        int ans=0, count=0;
        for(auto it:map)
        {
            if(it.second>=2) ans++;
            else if(it.second==1) count++;
        }
        ans+=count/2;
        cout<<ans<<endl;
    }
    return 0;
}