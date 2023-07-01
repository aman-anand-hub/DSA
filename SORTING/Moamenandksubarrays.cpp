#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
signed main()
{
    fastio
    int t; cin>>t;
    while (t--)
    {
        int n,k; cin>>n>>k;
        vector<int> v(n),s(n);
        for (int i = 0; i <n; i++)
        {
            cin>>v[i];
            s[i]=v[i];
        }
        sort(s.begin(),s.end());
        int count=0;
        for (int i = 0; i <n-1; i++)
        {
            count++;
            int it=upper_bound(s.begin(),s.end(),v[i])-s.begin();
            while(i<n-1 && it<n && v[i+1]==s[it])
            {
                i++;
                it++;
            }
        }
        if(n>=2)
        {
            int it=upper_bound(s.begin(),s.end(),v[n-2])-s.begin();
            if(v[n-1]!=s[it]) count++;
        }
        if(count<=k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
