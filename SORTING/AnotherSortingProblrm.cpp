#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
signed main()
{
    fastio
    int n,m; cin>>n>>m;
    vector<pair<string,int>> v;
    for (int i = 0; i < n; i++)
    {
        string s; cin>>s;
        for (int j = 1; j<m; j+=2)
        {
            s[j]= ('Z'-s[j]);
        }   
        v.push_back({s,i+1});
    }
    sort(v.begin(),v.end());
    for (auto x:v) cout<<x.second<<' ';
}