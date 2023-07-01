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
        int n; cin>>n;
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i].first;
            v[i].second=i+1;
        }
        sort(v.begin(),v.end());
        if(v[0].first==v[1].first)
        {
            cout<<v[n-1].second<<endl;
        }
        else cout<<v[0].second<<endl;
    }
    return 0;
}