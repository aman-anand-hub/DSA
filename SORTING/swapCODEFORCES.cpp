#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int main()
{
    fastio
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int a[n],b[n];
        for (int i=0;i<n;i++) cin>>a[i];
        for (int i=0;i<n;i++) cin>>b[i];
        map<int,int> m;
        vector<pair<int,int>> v;
        for (int i=0;i<n;i++)
        {
            m[a[i]]=i;
            v.push_back({b[i],i});
        }
        sort(v.begin(),v.end());
        int mi=INT_MAX;
        for(int i=n-1;i>=0;i--)
        {
            mi=min(mi,v[i].second);
            v[i].second=mi;
        }
        int ans=INT_MAX;
        int j=0;
        for (int i=1;i<2*n;i+=2)
        {
            int x=m[i];
            x+=v[j].second;
            ans=min(ans,x);
            j++;
        }
        cout<<ans<<endl;
    }
    return 0;
}